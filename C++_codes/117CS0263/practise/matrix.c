#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *newnode(int data){
	struct node *ptr = (struct node *)malloc(sizeof(struct node));
	ptr -> data = data;
	ptr -> next = NULL;
}

void linkedlist(int e1, int e2, struct node *p){
	while(p != NULL){
		if(e1 == p->data){
			
		}
	}

}

int main(){
	int n;
	int e;
	printf("Enter Number of Nodes: ");
	scanf("%d",&n);
	printf("Enter Number of edges: ");
	scanf("%d",&e);
	int i = 0, mat[n][n],e1,e2,j=0;
	struct node *head = newnode(0);
	for(i=0;i<n;i++)for(j=0;j<n;j++) mat[i][j] = 0;
	for(i=0;i<e;i++){
		printf("Enter directed edges:");
		scanf("%d %d", &e1, &e2);
		linkedlist(e1-1,e2-1,head);
		mat[e1-1][e2-1] = 1;
	}
	for(i=0;i<n;i++){ for(j=0;j<n;j++) {printf("%d", mat[i][j]);} printf("\n");}
}