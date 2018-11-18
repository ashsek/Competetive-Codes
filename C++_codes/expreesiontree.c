#include <stdlib.h>
#include <stdio.h>
#include<string.h>

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

struct stack
{
	struct node* stacknode;
	struct stack * next;
};

struct stack * head=NULL;

void push(struct node * curr_node)
{
	struct stack * newnode=malloc(sizeof(struct stack));
	newnode->stacknode=curr_node;
	newnode->next=head;
	head=newnode;
}

struct node * pop()
{
	struct stack * ptr = head;
	head=head->next;
	struct node* stacknode = ptr->stacknode;
	free(ptr);
	return stacknode;
}
void create_expression_tree(char * exp)
{

	int i=0;
	for(i=0;i<strlen(exp);i++)
	{
		if(exp[i]=='+' || exp[i]=='-' || exp[i] == '*' || exp[i] == '/')
		{
			struct node * b = pop();
			struct node * a = pop();
			struct node * newnode = newNode(exp[i]);
			newnode->left  = a;
			newnode->right = b; 
			push(newnode); 
		}
		else
		{
			struct node * newnode = newNode(exp[i]);
			push(newnode);
		}
	}

}

void printPostorder(struct node* node) 
{ 
    if (node == NULL) 
        return; 
  
   
    printPostorder(node->left); 
    printPostorder(node->right);
	printf("%c ", node->data );  
} 
void printinorder(struct node* node) 
{ 
    if (node == NULL) 
        return; 
  
   
    printinorder(node->left); 
	printf("%c ", node->data ); 
    printinorder(node->right);
 
} 
void printpreorder(struct node* node) 
{ 
    if (node == NULL) 
        return; 
  
	printf("%c ", node->data );  
    printpreorder(node->left); 
    printpreorder(node->right);

} 
int pre (char m)
{
   switch(m)
   {
   case '+' :
   case '-':
    return 4;
   case '%' :
   case '/' :
   case '*' :
    return 5;
   }
}
char * intopost(char * x)
{
    int i,j=-1,k=-1,a,b;
    char *opd, opr[20];
    opd=malloc(20*sizeof(char ));

    for(i=0;i< strlen(x);i++)
    {
    	    if(x[i]>=48 && x[i]<=57)
	    {
		j++;
		opd[j]=x[i];
	    }
	    else
	    {
		if(k==-1 || x[i] =='(')
		{
		    k++;
		    opr[k]=x[i];
		    continue;
		}
	    	else if(x[i]==')')
		{
			while(opr[k]!='(')
			{
				j++;
				opd[j]=opr[k];
				k--;
				if(k==-1)
				{
					printf("inbalanced bracket\n");
					return 0;
				}
			}
			k--;
		}
		else
		{
		    a= pre(x[i]);
		    b= pre(opr[k]);
		    while(k>=0 && a<=b)
		    {
		        j++;
		        opd[j]=opr[k];
		        k--;
		        if(k==-1)
		            break;
		        b=pre(opr[k]);
		    }
		    k++;
		    opr[k]=x[i];
		}
	    }
	}	
	while(k>=0)
	{
	    j++;
	    opd[j]=opr[k];
	    k--;
	}
	for(i=0;i<=j;i++)
	{
    		if(opr[i]=='(' || opr[i]==')')
		{
			printf("inbalanced bracket\n");
				return 0;
		}
	}
	return opd;
}

int main()
{
	char  expression[10];
	printf("Enter the expression : ");
	scanf("%s",expression);
	char *postexp= intopost(expression);
  	create_expression_tree(postexp);
	printf("after creating the tree the expression from postorder tree traversal is :\n");
 	printPostorder(head->stacknode);
	printf("\n");
	printf("after creating the tree the expression from inorder tree traversal is :\n");
 	printinorder(head->stacknode);
	printf("\n");
	printf("after creating the tree the expression from preorder tree traversal is :\n");
 	printpreorder(head->stacknode);
	printf("\n");
  	return 0;
}
