#include<stdio.h>
#include<stdlib.h>
typedef struct nodetype
{
	int data;
	struct nodetype* next;
} node;
void display(int , node **);


int visited[9], stack1[9], stack2[9], top1, top2;


void push(int *top, int *stack, int a)
{
	(*top)++;
	stack[*top]=a;
}
int pop(int *top, int *stack)
{
	int data=stack[*top];
	(*top)--;
	return data;
}
void display(int v, node **r)
{
	node *temp=*(r+v-1);
	while(temp!=NULL)
	{
		printf("%c ", temp->data+64);
		temp=temp->next;
	}
	printf("\n");
}
void show(int *stack, int top)
{
	while(top!=-1)
	{
		printf("%c\t", stack[top]+64);
		top--;
	}

}
node* create(int val)
{
	node* p;
	p=(node*)malloc(sizeof(node*));
	p->data=val;
	p->next=NULL;
	return p;
}
void ts(int v, node **p)
{
	int flag=0;
	visited[v-1]=1;
	node *q;
	q=*(p+v-1);
	while(q!=NULL)
	{
		if(visited[q->data-1]==1) q=q->next; 
		else
		{
			push(&top1, stack1, q->data);
			flag++;
			visited[q->data-1]=1;
			//q=q->next;
		}			
	}
		if(flag==0) push(&top2, stack2, pop(&top1, stack1));
		if(top1!=-1)ts(stack1[top1], p);
}
			
				
int main()
{	
	int i, j;
	for(j=0; j<9; j++)
	{
		visited[j]=0;
	}
	node *temp1, *temp2, *temp3, *temp4;
	node *arr[9];
	
	temp1=create(2);
	arr[0]=temp1;
	temp1->next=temp2=create(3);
		
	temp1=create(6);
	arr[1]=temp1;
		
	arr[2]=NULL;
		
	temp1=create(1);
	arr[3]=temp1;
	temp1->next=temp2=create(5);
	temp2->next=temp3=create(2);
		
	arr[4]=NULL;
		
	temp1=create(5);
	arr[5]=temp1;
		
	temp1=create(6);
	arr[6]=temp1;
		
	temp1=create(7);
	arr[7]=temp1;
	temp1->next=temp2=create(6);
		
	temp1=create(8);
	arr[8]=temp1;
	temp1->next=temp2=create(5);
	
	top1=top2=-1;	
	for(i=1;i<10;i++)
	{
		if(visited[i-1]==0)
		{
			push(&top1, stack1, i);
			ts(i,arr);
		}
	}			
	show(stack2, top2);
	
}
	
	
	
	
	
	

	
