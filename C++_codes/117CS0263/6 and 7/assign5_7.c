#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define max 50
int *a,N;//Array as the disjoint data type

void makeset(int n)
{
	a=(int *)malloc(n*sizeof(int));
	int i;
	for(i=0;i<n;i++)
	{
		*(a+i)=-1;
	}
}
int findset(int x)
{
	if(a[x]<0)
		return x;
	else
	{
		a[x]=findset(a[x]);
		return a[x];
	}
}
int unionset(int x, int y)
{
	x=findset(x);
	y=findset(y);
	if(x!=y)
	{
		if(a[x]<a[y])
		{
			a[x]+=a[y];
			a[y]=x;
		}
		else
		{
			a[y]+=a[x];
			a[x]=y;
		}
		if(a[x]==a[y])
		{
			a[x]+=a[y];
			a[y]=x;
		}	
		return 1;
	}
	else
		return 0;
} 

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


int main()
{
	g=(graph*)malloc(sizeof(graph));
	printf("\nEnter the number of Nodes in your graph\n");
	scanf("%d",&N);
	int i;	
	for(i=0;i<N;i++)
		g->head[i]=NULL;
	makeset(N);
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
	int flag=0;
	for(i=0;i<N;i++)
	{
		node *ptr=g->head[i];
		while(ptr)
		{
			int dest=ptr->dest;
			int d=unionset(i,dest);
			if(d==0)
			{
				flag=1;
				break;
			}
			ptr=ptr->next;
		}
	}
	if(flag==1)
		printf("\nCycle detected\n");
	else
		printf("\nNo Cycle detected\n");

}
