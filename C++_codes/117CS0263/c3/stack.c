#include <stdio.h>
struct stack
{
	int st[10];
	int top;
};
typedef struct stack STACK;
STACK s;
void push(void);
int  pop(void);
void display(void);

void main ()
{
	int choice;
	int option = 1;
	s.top = -1;
	printf("\n===================================================\n");
	while (option)
	{
    		printf ("1 PUSH               \n");
   		printf ("2 POP               \n");
   		printf ("3 DISPLAY               \n");
    		printf ("4 EXIT\n");
    		printf ("Enter your choice: ");
    		scanf ("%d", &choice);
    		switch (choice)
    		{
    			case 1:
				push();
				break;
    			case 2:
				pop();
				break;
    			case 3:
				display();
				break;
    			case 4:
				return;
    		}
    	fflush (stdin);
   	printf ("Continue(Type 0(N) or 1(Y)): ");
    	scanf("%d", &option);
	}
}
//for pushing on the stack
void push ()
{
	int num;
	if (s.top == (10 - 1))
	{
    		printf ("ERR: Stack is Full\n");
    		return;
	}
	else
	{
    		printf ("Enter the element to be pushed:");
   	 	scanf ("%d", &num);
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
    		printf ("poped element is = %d\n", s.st[s.top]);
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

		printf ("\nThe status of the stack is \n");
		for (i = s.top; i >= 0; i--)
		{
			printf ("|_%d_|\n", s.st[i]);
		}
	}
	printf ("\n");
}
