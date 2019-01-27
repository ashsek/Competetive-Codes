#include<stdio.h>
#include<stdlib.h>

struct Node
{
  	int data;
  	struct Node *next;
};

int main()
{
  	struct Node* head = NULL;
  	head = (struct Node*)malloc(sizeof(struct Node));
  	if (head->next == NULL)
  	{
		printf("Linked List is Empty \n");
	}

	// Creating a LL with 10 nodes.
	struct Node* header = NULL;
	header = (struct Node*)malloc(sizeof(struct Node));
	printf("Enter Value to insert in linked list.");
	int o;
	scanf("%d",&o);
	header->data = o;
	struct Node* ptr = NULL;
	ptr = (struct Node*)malloc(sizeof(struct Node));
	int n = 10;
	ptr = header;

	//Scanning Node Data.
	while(n>1){
        	struct Node* ptr2 = NULL;
       	 	ptr2 = (struct Node*)malloc(sizeof(struct Node));
		int y;
		printf("Enter Value to insert in linked list.");
		scanf("%d",&y);
		ptr2->data = y;
		ptr2->next = NULL;
		ptr->next = ptr2;
		ptr = ptr->next;
		n-=1;
	}

	//Printing Node Data.
    struct Node* ptr3 = NULL;
    ptr3 = (struct Node*)malloc(sizeof(struct Node));
	ptr3 = header;
	printf("Linked List: \n");
	while(ptr3!=NULL)
	{
		printf("%d ->", ptr3->data);
		ptr3 = ptr3->next;
		n-=1;
	}
	printf(" NULL \n");

	//Inserting a value at the start of our list.
	int beg;
	printf("\nEnter the value to insert at begining.\n");
	scanf("%d", &beg);
        struct Node* ptr4 = NULL;
        ptr4 = (struct Node*)malloc(sizeof(struct Node));
	ptr4->data = beg;
	ptr4->next = header;
	header = ptr4;

        struct Node* ptr5 = NULL;
        ptr5 = (struct Node*)malloc(sizeof(struct Node));
        ptr5 = header;
        n = 11;
	printf("Linked List with/out addded node: \n");
	//printing new values.
        while(ptr5!=NULL)
        {
                printf("%d ->", ptr5->data);
                ptr5 = ptr5->next;
        }
        printf(" NULL \n");

	//inserting a node after a specific node in a linked list.

	printf("Enter the node value after which you want to insert our new node: ");
	int k;
	scanf("%d",&k);
	printf("Enter the value of Node which you want to insert: ");
	int k2;
	scanf("%d",&k2);

        struct Node* ptr6 = NULL;
        ptr6 = (struct Node*)malloc(sizeof(struct Node));
	ptr6->data = k2;
	ptr6->next = NULL;
        struct Node* ptr7 = NULL;
        ptr7 = (struct Node*)malloc(sizeof(struct Node));
	ptr7 = header;
	struct Node* ptr8 = NULL;
        ptr8 = (struct Node*)malloc(sizeof(struct Node));
	while(ptr7!=NULL){
		if(ptr7->data == k){
		//Do something
			ptr8 = ptr7->next;
			ptr7->next = ptr6;
			ptr7->next->next = ptr8;
			break;
		}
		if(ptr7->next == NULL){
			printf("Value Dosent exist. \n");
			break;
		}
		ptr7= ptr7->next;
	}

        struct Node* ptr9 = NULL;
        ptr9 = (struct Node*)malloc(sizeof(struct Node));
        ptr9 = header;
        printf("Linked List with addded node: \n");
        //printing new values.
        while(ptr9 != NULL)
        {
                printf("%d ->", ptr9->data);
                ptr9 = ptr9->next;
        }
        printf(" NULL \n");

	//Inserting elements before a value in LL
	printf("Enter the node value before which you want to insert our new node: ");
        int k3;
        scanf("%d",&k3);
        printf("Enter the value of Node which you want to insert: ");
        int k4;
        scanf("%d",&k4);

	struct Node* ptr10 = NULL;
        ptr10 = (struct Node*)malloc(sizeof(struct Node));
        ptr10->data = k4;
        ptr10->next = NULL;
        struct Node* ptr11 = NULL;
        ptr11 = (struct Node*)malloc(sizeof(struct Node));
        ptr11 = header;
        struct Node* ptr12 = NULL;
        ptr12 = (struct Node*)malloc(sizeof(struct Node));
        while(1>0){
                if(ptr11->next->data == k3){
                //Do something
                        ptr12 = ptr11->next;
                        ptr11->next = ptr10;
                        ptr11->next->next = ptr12;
                        break;
                }
                if(ptr11->next == NULL){
                        printf("Value Dosent exist.");
			break;
                }
                ptr11= ptr11->next;
        }

        struct Node* ptr13 = NULL;
        ptr13 = (struct Node*)malloc(sizeof(struct Node));
        ptr13 = header;
        n = 14;
        printf("Linked List with addded node: \n");
        //printing new values.
        while(ptr13!=NULL)
        {
                printf("%d ->", ptr13->data);
                ptr13 = ptr13->next;
                n-=1;
        }
        printf(" NULL\n");

	//finding the average of elemtnts.
	printf("Calculating Average...............");
	struct Node* ptr14 = NULL;
        ptr14 = (struct Node*)malloc(sizeof(struct Node));
        ptr14 = header;
	n = 13;
	float n2=0;
        float t_s=0;
        while(n>0)
        {
                t_s += ptr14->data;
                ptr13 = ptr14->next;
                n-=1;
		n2+=1;
        }
	printf("\nCurrent Average : %f\n", t_s/n2);

	//frequency of occurance of each element of linked list.


	//Append above linked list with another one.

	// Sample new linked list:
	struct Node* head2 = NULL;
 	struct Node* second = NULL;
  	struct Node* third = NULL;

  	// allocate 3 nodes in the heap
  	head2 = (struct Node*)malloc(sizeof(struct Node));
  	second = (struct Node*)malloc(sizeof(struct Node));
  	third = (struct Node*)malloc(sizeof(struct Node));

	head2->data = 1; //assign data in first node
  	head2->next = second;

	second->data = 2; //assign data in first node
  	second->next = third;

	third->data = 3;
	third->next = NULL;

	//Appening our linked list to this linked list we get,
	third->next = header;

	struct Node* ptr20 = NULL;
        ptr20 = (struct Node*)malloc(sizeof(struct Node));
        ptr20 = head2;
        n = 14;
        printf("Appended linked list: \n");
        //printing new values.
        while(ptr20 != NULL)
        {
                printf("%d ->", ptr20->data);
                ptr20 = ptr20->next;
                n-=1;
        }
	printf("NULL \n");

	//Deleting from the end of linked list.
	struct Node* ptr21 = NULL;
        ptr21 = (struct Node*)malloc(sizeof(struct Node));
        ptr21 = head2;
	while(1>0){
		if(ptr21->next->next == NULL){
			free(ptr21);
			ptr21->next = NULL;
			break;
		}
		ptr21=ptr21->next;
	}

	//Printing new linked list.
	struct Node* ptr22 = NULL;
        ptr22 = (struct Node*)malloc(sizeof(struct Node));
        ptr22 = head2;
        printf("Last node deleted linked list: \n");
        //printing new values.
        while(ptr22 != NULL)
        {
                printf("%d ->", ptr22->data);
                ptr22 = ptr22->next;
                n-=1;
        }
        printf("NULL \n");

	//Deleting from the start of linked list.
        struct Node* ptr23 = NULL;
        ptr23 = (struct Node*)malloc(sizeof(struct Node));
        ptr23 = head2;

	struct Node* ptr24 = NULL;
        ptr24 = (struct Node*)malloc(sizeof(struct Node));
        ptr24 = head2->next;

	head2->next = NULL;
	head2 = ptr24;


        //Printing new linked list.
        struct Node* ptr25 = NULL;
        ptr25 = (struct Node*)malloc(sizeof(struct Node));
        ptr25 = head2;
        printf("First node deleted linked list: \n");
        //printing new values.
        while(ptr25 != NULL)
        {
                printf("%d ->", ptr25->data);
                ptr25 = ptr25->next;
        }
        printf("NULL \n");

	printf("Enter the value of node which you want to delete: ");
	int del;
	scanf("%d",&del);
	ptr25 = head2;
	while(1>0){
		if(ptr25->next->data == del){
			ptr24 = ptr25->next->next;
			free(ptr25->next);
			ptr25->next = ptr24;
			break;
		}
		if(ptr25->next == NULL){
			break;
		}
		ptr25= ptr25->next;
	}

	ptr25 = head2;
        printf("Selected node deleted linked list: \n");
        //printing new values.
        while(ptr25 != NULL)
        {
                printf("%d ->", ptr25->data);
                ptr25 = ptr25->next;
        }
        printf("NULL \n");

	//Deleting the complete linked list.
	head2 = NULL;
	free(head2);
	printf("Linked List has been deleted sucessfully \n");
}
