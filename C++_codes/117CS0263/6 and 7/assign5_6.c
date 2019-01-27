#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define max 50

int N;

//Stack Operations
int stack1[max],top1=-1;
int isEmpty(int *top)
{
	if((*top)<=-1)
		return 1;
	else
		return 0;
}
int isFull(int *top)
{
	if((*top)>=N)
		return 1;
	else
		return 0;
}
void push(int stack[max],int *top,int data)
{
	if(isFull(top))
		return;
	(*top)++;
	stack[(*top)]=data;
}
int pop(int stack[max],int *top)
{
	if(isEmpty(top))
		return -1;
	int data=stack[(*top)];
	(*top)--;
	return data;
}
int peek(int stack[max],int *top)
{
	if(isEmpty(top))
		return -1;
	return stack[(*top)];
}
//Graph Operations
typedef struct graph
{
	struct Node* head[max];
}graph;
typedef struct Node
{
	int dest;
	struct Node* next;
}node;
graph *g;
int visited[max];
void createGraph(int src,int dest,graph* g)
{
	node* newNode=(node*)malloc(sizeof(node));
	newNode->dest=dest;
	newNode->next=NULL;
	node **ptr=&(g->head[src]);
	if((*ptr)==NULL)
	{
		*ptr=newNode;
	}
	else
	{
		while((*ptr)->next!=NULL)
			(*ptr)=(*ptr)->next;
		(*ptr)->next=newNode;
	}
}

void topologicalSort(int i)
{
	node *ptr=g->head[i];
	visited[i]=1;
	push(stack1,&top1,i);
	while(ptr!=NULL)
	{
		i=ptr->dest;
		if(visited[i]==0)
		{
			topologicalSort(i);
		}
		ptr=ptr->next;
	}	
}

int main()
{
	g=(graph*)malloc(sizeof(graph));
	printf("\nEnter the number of Nodes in your graph\n");
	scanf("%d",&N);
	int i;
	for(i=0;i<N;i++)
		g->head[i]=NULL;
	int c;
	int ch=1;
	//Checking the type of graph
	do
	{
		printf("\nEnter 0 for an undirected graph or 1 for a directed graph\n");
		scanf("%d",&ch);
		if(ch!=1&&ch!=0)
			printf("\nEnter either 0 or 1\n");
	}while((ch!=1&&ch!=0));
	//Getting the edges as input
	printf("\nEnter the data of edges in the graph\n");
	do{
		printf("\nEnter the two nodes as source and destination for an edge(0-indexed)\n");
		int src,dest;
		scanf("%d %d",&src,&dest);
		if(src<0||src>=N||dest<0||dest>=N)
		{
			printf("\nInvalid edge\n");
			continue;
		}
		if(ch==1)
			createGraph(src,dest,g);
		else
		{
			createGraph(src,dest,g);
			createGraph(dest,src,g);
		}
		printf("\nEnter 1 to add more edges or 0 to exit\n");
		scanf("%d",&c);
	}while(c);
	//Begin Topological Sorting Process
	for(i=0;i<N;i++)
	{
		visited[i]=0;
	}
	for(i=0;i<N;i++)
	{
		if(visited[i]==0)
			topologicalSort(i);
	}
	while(!isEmpty(&top1))
	{
		int d=pop(stack1,&top1);
		printf("%c ",(65+d));
	}
	printf("\n");
} 
