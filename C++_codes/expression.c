#include<stdio.h>
#include<stdlib.h>
int top=-1;
char stack2[20];
int top2 = -1;
void push2(char x)
{
    stack2[++top2] = x;
}
 
char pop2()
{
    if(top2 == -1)
        return -1;
    else
        return stack2[top2--];
}


struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *stack[100];

void push(struct node *p){
    top += 1;
    stack[top] = p;
}

struct node *pop(){
    top -= 1;
    return stack[top+1];
}

int priority(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
}

char pf[100];


char postfix(char *e){
	char x;
	printf("\n");
    while(*e != '\0')
    {
        if(isalnum(*e))
            printf("%c",*e);
        else if(*e == '(')
            push2(*e);
        else if(*e == ')')
        {
            while((x = pop2()) != '(')
                printf("%c", x);
        }
        else
        {
            while(priority(stack2[top2]) >= priority(*e))
                printf("%c",pop2());
            push2(*e);
        }
        e++;
    }
    int i = 0;
    while(top2 != -1)
    {
        pf[i++] = pop2();
    }
}

struct node *new_node(char dat){
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = dat;
    p->left = NULL;
    p->right = NULL;
    return p;
}

int main(){
    char exp[100];
    scanf("%s", exp);
    printf("%s" , exp);
    // printf("\n");
    postfix(exp);
}
