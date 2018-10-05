#include<stdio.h>
#include <stdlib.h>

struct Node
{
   int data;
   struct Node *next;
}*front = NULL,*rear = NULL;

void insert(int);
void dele();
void display();
void empty();

void main()
{
   int choice, value,y=1;
   printf("Empty queue created.");
   while(1){
      printf("\n==========================\n");
      printf("1. Enqueue \n2. Dequeue\n3. Display\n4. Empty Queue \n5. Exit\n");
      printf("Enter choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter value to insert: ");
		 scanf("%d", &value);
		 insert(value);
		 break;
	 case 2: dele(); break;
	 case 3: display(); break;
	 case 4: empty(); break;
	 case 5: exit(0);
	 default: printf("\nRetry a suitable option.\n"); break;
      }
   }
}
void insert(int value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   newNode -> next = NULL;
   if(front == NULL)
      front = rear = newNode;
   else{
      rear -> next = newNode;
      rear = newNode;
   }
}
void dele()
{
   if(front == NULL)
      printf("\nQueue is Empty!!!\n");
   else{
      struct Node *temp = front;
      front = front -> next;
      printf("\nDequeued element: %d\n", temp->data);
      free(temp);
   }
}

void empty()
{
   if(front == NULL)
      printf("\nQueue is Already Empty!!!\n");
   else{
      while(front != NULL){
      struct Node *temp = front;
      front = front -> next;
      printf("\nDequeued element: %d\n", temp->data);
      free(temp);
	}
      display();
   }
}

void display()
{
   if(front == NULL)
      printf("\nQueue is Empty!!!\n");
   else{
      struct Node *temp = front;
      while(temp->next != NULL){
	 printf("%d->",temp->data);
	 temp = temp -> next;
      }
      printf("%d--->NULL\n",temp->data);
   }
}
