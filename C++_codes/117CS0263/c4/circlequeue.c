// #include<stdio.h>
// #include<stdlib.h>

// struct Node
// {
//    int data;
//    struct Node *next;
// }*front = NULL,*rear = NULL;

// void insert(int);
// void dele();
// void display();
// void empty();

// int size=0,m_size;

// void main()
// {
//    int choice, value,y=1;
//    printf("Empty Circular queue created.");
//    while(1){
//       printf("\n==========================\n");
//       printf("1. Enqueue \n2. Dequeue\n3. Display\n4. Empty Queue \n5. Exit\n");
//       printf("Enter choice: ");
//       scanf("%d",&choice);
//       switch(choice){
// 		 case 1: printf("Enter value to insert: ");
// 			 scanf("%d", &value);
// 			 printf("Enter size of circular queue")
// 			 scanf("%d",&m_size);
// 			 insert(value);
// 			 break;
// 		 case 2: dele(); break;
// 		 case 3: display(); break;
// 		 case 4: empty(); break;
// 		 case 5: exit(0);
// 		 default: printf("\nRetry a suitable option.\n"); break;
//       }
//    }
// }

// void insert(int value){
// 	if(size<m_size){
// 	   struct Node *newNode;
// 	   newNode = (struct Node*)malloc(sizeof(struct Node));
// 	   newNode->data = value;
// 	   if(front == NULL)
// 	      front = rear = newNode;
// 	   else{
// 	      rear -> next = newNode;
// 	      rear = newNode;
// 	   }
// 	   newNode->next = front;
// 	   size+=1;
// 	  }
// 	 else{
// 	 	printf("ERROR: Queue Size FULL")
// 	 }
// }
/*Circular Queue implementation using linked list
Written by Shivam Rana
Date- 3-4-12*/
#include<stdio.h>
#include<stdlib.h>
#define que struct queue
#define pf printf
#define sf scanf
struct queue{
int info;
struct queue *link;
};
 que *front=NULL,*rear=NULL;
int count=0;
void push(int n)
{
que *newnode;
newnode=(struct queue*)malloc(sizeof(struct queue));
newnode->info=n;
newnode->link=NULL;
if(count==0)
front=newnode;
else
        rear->link=newnode;
    rear=newnode;
    rear->link=front;
count++;
}
int pop(void)
{
int n;
que *temp;
if(count==0)
return (-1);
count--;
    if(front==rear)
    {
        n=front->info;
        free(front);
        front=NULL;
        rear=NULL;
    }else
    {
            temp= front ;
            n = temp-> info ;
            front = front -> link ;
            rear -> link = front ;
            free ( temp ) ;
    }
return n;
}
void display(void)
{
que *temp;
int i;
if(count==0)
pf("Empty");
else
{
temp=front;
for(i=0;i<count;i++)
{
pf("%d ",temp->info);
temp=temp->link;
}
}
pf("\n");
}
int size(void)
{
return count;
}
int main()
{
int n,ch=10;
while(ch!=0)
{
pf("\n       What do you want to do??\n");
pf("1.Push\n");
pf("2.Pop\n");
pf("3.SizeOfQueue\n");
pf("4.Display\n");
pf("0.EXIT\n");
sf("%d",&ch);
switch(ch)
{
case 1:
{
pf("What no. do you want to push in queue\n");
sf("%d",&n);
push(n);
break;
}
case 2:
{
n=pop();
if(n==-1)
pf("Queue is empty\n");
else
pf("Number poped from queue is %d\n",n);
break;
}
case 3:
{
n=size();
pf("Size of queue is %d\n",n);
break;
}
case 4:
{
pf("Queue is -->> ");
display();
}
case 0:
break;
default:
pf("Wrong Choice\n");
break;
}
}
}