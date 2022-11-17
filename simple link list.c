#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
    struct Node*  prip;
};


int main()
{

	struct Node* head = NULL;
	struct Node* temp = NULL;
	struct Node* data1 = NULL;
	struct Node* data2 = NULL;
	struct Node* data3 = NULL;



	head = (struct Node*)malloc(sizeof(struct Node));
	data1  = (struct Node*)malloc(sizeof(struct Node));
	data3  = (struct Node*)malloc(sizeof(struct Node));
	data2  = (struct Node*)malloc(sizeof(struct Node));



    head->prip = NULL;

	head->data = 1;

	head->next = data1;




    data1->privious=head;

	data1->data = 2;

	data1->next = data2;



    data2->privious = second;

	data2->data = 3;

	data2->next = data3;



	 data3->privious = third;

	 data3->data= 4;

	 data3->next = NULL;



	temp=head;
	printf("[%d]-->",temp);
    while (temp != 0)
    {
        printf("[%d] [%d] [%d] <-> ",temp->prip,temp->data,temp->next);

        temp = temp->next;
    }
	return 0;
}
