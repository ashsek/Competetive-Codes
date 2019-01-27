#include<stdio.h>
#include<stdlib.h>
int top;
 struct node 
	{
		int data;
		struct node *left;
		struct node *right;
	};

struct node *stack[100];
struct node *new_node(int data)
	{
		struct node *ptr= (struct node*)malloc(sizeof(struct node));
		ptr->data=data;
		ptr->left=NULL;
		ptr->right=NULL;
		return ptr;
	}
void push( struct node *x)
	{
		top+=1;
		stack[top]=x;
	}

struct node *pop()
	{
			
		struct node* x= stack[top];
		top-=1;
		return x;
	
	}


void preorder_recursion(struct node *p)
	{
		if(p==NULL)
			return;
		printf("%c  ",p->data+65);		
		preorder_recursion(p->left);

		preorder_recursion(p->right);
	}

void preorder( struct node* p)
{
	struct node *ptr=p;
	push(NULL);
	while(ptr!=NULL)
	{
		printf("%c ",ptr->data+65);
		if(ptr->right!=NULL)
			push(ptr->right);
		if(ptr->left!=NULL)
			ptr=ptr->left;
		else
		ptr=pop();
	}
}
int main()
{
	top=-1;
	struct node *root=new_node(0);
	root->left=new_node(1);	
	root->right=new_node(2);
	root->left->left=new_node(3);
	root->left->right=new_node(4);
	root->right->left=new_node(5);
	root->right->right=new_node(6);
	printf("The pre-order using recursion is :\n");
	preorder_recursion(root);
	printf("\n The pre order without recursion is:\n");
	preorder(root);
	printf("\n");	
	return 0;
}
	
