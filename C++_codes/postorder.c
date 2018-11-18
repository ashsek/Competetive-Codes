#include<stdio.h>
#include<stdlib.h>
int top1,top2;
 struct node 
	{
		int data;
		struct node *left;
		struct node *right;
	};
struct node *new_node(int data)
	{
		struct node *ptr= (struct node*)malloc(sizeof(struct node));
		ptr->data=data;
		ptr->left=NULL;
		ptr->right=NULL;
		return ptr;
	}
struct node *s1[100], *s2[100];
void push1( struct node *x)
	{
		top1+=1;
		s1[top1]=x;
	}

struct node *pop1()
	{
			
		struct node* x= s1[top1];
		top1-=1;
		return x;
	
	}
void push2( struct node *x)
	{
		top2+=1;
		s2[top2]=x;
	}

struct node *pop2()
	{
			
		struct node* x= s2[top2];
		top2-=1;
		return x;
	
	}

void postorder_recursion(struct node *p)
	{
		if(p==NULL)
			return;
				
		postorder_recursion(p->left);
		postorder_recursion(p->right);
		printf("%c  ",p->data+65);
	}
void postorder(struct node *p)
{
	struct node *ptr=p;
	push1(NULL);
	push2(NULL);
	push1(ptr);
	ptr=pop1();
	while(ptr!=NULL)
	{
		push2(ptr);
		if(ptr->left!=NULL)
			push1(ptr->left);
		if(ptr->right!=NULL)
			push1(ptr->right);	
		ptr=pop1();
	}
	
	ptr=pop2();
	while(ptr!=NULL){
		printf("%c ",ptr->data+65);
		ptr=pop2();
	}
}

int main()
{
	top1=-1,top2=-1;
	struct node *root=new_node(0);
	root->left=new_node(1);	
	root->right=new_node(2);
	root->left->left=new_node(3);
	root->left->right=new_node(4);
	root->right->left=new_node(5);
	root->right->right=new_node(6);
	printf("The post-order using recursion is :\n");
	postorder_recursion(root);
	printf("\nThe post-order without using recursion is :\n");
	postorder(root);
	printf("\n");
	return 0;
}
	
