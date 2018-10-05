#include <stdio.h>
#include<string.h>
struct stack
{
	int st[10];
	int top;
};
typedef struct stack STACK;
STACK s;
void push(int);
int  pop(void);
void display(void);

void main ()
{
	int choice;
	int option = 1;
	int y = 1;
	s.top = -1;
	char exp[100];
	printf("Enter the expression: ");
	scanf("%s",exp);
	printf("%s \n",exp);
	int l;
	l = strlen(exp); // Length of string
	char rb = '(',lb = ')';
	int i;
	for(i=0;i<l;i++){

                if(exp[i] == '*'){
                int s1;
                int s2;
                s1 = pop();
                s2 = pop();
                push(s1*s2);
                }
                else if(exp[i] == '+'){
                int s1;
                int s2;
                s1 = pop();
                s2 = pop();
                push(s1+s2);

                }
                else if(exp[i] == '-'){
                int s1;
                int s2;
                s1 = pop();
                s2 = pop();
                push(s1-s2);

                }
                else if(exp[i] == '/'){
                int s1;
                int s2;
                s1 = pop();
                s2 = pop();
                push(s1/s2);
                }
		else{
		push((int) exp[i]-48);
		}
	}
	display();
}
//for pushing on the stack
void push (int num)
{
	if (s.top == (10 - 1))
	{
    		printf ("ERR: Stack is Full\n");
    		return;
	}
	else
	{
    		s.top = s.top + 1;
    		s.st[s.top] = num;
	}
	return;
}

//for poping
int pop ()
{
	int num;
	if (s.top == - 1)
	{
    		printf ("ERR: Stack is Empty\n");
    		return (s.top);
	}
	else
	{
    		num = s.st[s.top];
    		s.top = s.top - 1;
	}
	return(num);
}

//To display stack
void display ()
{
	int i;
	if (s.top == -1)
	{
    		printf ("Stack is empty\n");
    		return;
	}
	else
	{
       		if (s.top == (10 - 1))
        	{
			printf("========================");
                	printf ("The Stack is Full\n");
			printf("========================");
        	}

		printf ("\nThe Output of the expression is: ");
		for (i = s.top; i >= 0; i--)
		{
			printf ("%d\n", s.st[i]);
		}
	}
	printf ("\n");
}
