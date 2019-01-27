#include<stdio.h>
#include<stdlib.h>

struct node
{
    char data;
    struct node* left;
    struct node* right;
};


struct node* newNode(char data)
{
    struct node* node = malloc(sizeof(struct node));;
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}

void util(struct node * node)
{
	int a=node->left->data-48;
	int b=node->right->data-48;
	char opr=node->data;
	if(opr=='+')
	{
		node->data=a+b;
	}
	else
	if(opr=='-')
	{
		node->data=a-b;
	}
	else
	if(opr=='*')
	{
		node->data=a*b;
	}
	else
	if(opr=='/')
	{
		node->data=a/b;
	}
	free(node->left);
	free(node->right);
	node->left=NULL;
	node->right=NULL;
}
struct node * root ;
struct node* parent;
void evaluate(struct node* node) 
{ 
    if (node == NULL || node->left==NULL || node->right==NULL) 
        return; 
    evaluate(node->left);
	util(node); 
	parent=node;
} 

int main()
{
	root = newNode('+');
	parent=root;
	root->left=newNode('1');
	root->right=newNode('2');
	evaluate(root);
	printf("answer of the expression is : %d\n",root->data);
	return 0;
}
