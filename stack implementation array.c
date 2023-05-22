#include <stdio.h>
#define size 5
#include <stdlib.h>
int stack[5];
int top = -1;
void push()
{
	int item;
	printf("Enter the item to insert = ");
	scanf("%d",&item);
	if(top==size-1)
	{
	printf("Overflow!");
	}
	else
	{
		top++;	
		stack[top]=item;
	}
}
void pop()
{
	int save;
	if(top==-1)
	printf("Underflow!");
	else
	{
		save = stack[top];
		printf("%d is popped out! \n",save);
		top--;
	}
}
void peek()
{
	if(top==-1)
	printf("The stack is empty!");
	else
	{
		printf("The item at the top of the stack is = \n");
		printf("%d",stack[top]);
	}
}
void display()
{
	int i;
	for(i=top;i>=0;i--)
	{
		printf("%d \n",stack[i]);
	}
}
void main()
{
	system("color f0");
	int ch;
	do
	{
		printf("Enter choice = 1 for Push, 2 for pop, 3 for peek, 4 to display and 0 to exit. \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: push();
			break;
			case 2: pop();
			break;
			case 3: peek();
			break;
			case 4: display();
			break;
		}
	}while(ch!=0);
	printf("The final stack is = \n");
	display();
}