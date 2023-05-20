#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct node
{
	int info;
	struct node *forw;
	struct node *back;
};
struct node *start, *newnode, *ptr, *last;

void create()
{
	int choice = 1;
	start = 0;
	last = 0;
	while(choice==1)
	{
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter information = ");
	scanf("%d",&newnode->info);
	newnode->back = 0;
	newnode->forw = 0;
	if(start==0&&last==0) //the linked list is empty.
	{
		start=newnode;
		last = newnode;
		ptr = newnode;//updating ptr.
	}
	else
	{
		ptr->forw = newnode;
		newnode->back = ptr;
		ptr = newnode; //updating ptr.
		last = newnode;
	}
	printf("Press 1 to CONTINUE and press 0 to STOP = ");
	scanf("%d",&choice);
}
}

void display()
{
	int ch;
	printf("For forward display press 1... For backward display press 2... \n");
	scanf("%d",&ch);
	printf("Your data in linked list is = \n");
	if(ch==1)
	{
	ptr = start;
	while(ptr!=0)
	{
		if(ptr->forw!=0)
		{
		printf("%d->",ptr->info);
		}
		else
		{
			printf("%d \n",ptr->info);
		}
		ptr = ptr->forw;
	}
	}
	else if(ch==2)
	{
		ptr = last;
		while(ptr!=0)
		{
			if(ptr->back!=0)
			{
			printf("%d->",ptr->info);
			}
			else
			{
				printf("%d \n",ptr->info);
			}
			ptr = ptr->back;
		}
	}
	else
	{
		printf("Invalid choice!");
	}
}

void insert()
{
	int pos;
	int i=1; //for loop;
	int x; //to store the choice of the user.
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter info = ");
	scanf("%d",&newnode->info);
	printf("Where do you want to insert the info = \n");
	printf("Press 1 for Beginning... Press 2 for end... Press 3 to insert at a particular position = \n");
	scanf("%d",&x);
	if(x==1)
	{
		newnode->back=0;
		newnode->forw = start;
		start->back=newnode;
		start=newnode;
	}
	else if(x==2)
	{
		newnode->forw=0;
		newnode->back=last;
		last->forw=newnode;
		last=newnode;
	}
	else if(x==3)
	{
		printf("Enter the position at which you want to insert = \n");
		scanf("%d",&pos);
		ptr=start;
		while(i<pos-1)//trying to reach the node which is previoust to the node at pos;
		{
			ptr=ptr->forw;
			i++;	
		}		
		newnode->back=ptr;
		newnode->forw=ptr->forw;
		ptr->forw->back=newnode;
		ptr->forw = newnode;
	}
	else
	{
		printf("Invalid choice!");
	}
}

void del()
{
	int p; //To store the position for particular case;
	int j; //for loop;
	if(start==0)
	{
		printf("Underflow!");
	}
	else
	{
	int y = 0;
	printf("To delete the first node press 1... to delete the last node press 2... to delete a particular node press 3 = \n");
	scanf("%d",&y);
	if(y==1)
	{
		ptr=start;
		printf("%d is deleted \n",ptr->info);
		start=start->forw;
		start->back=0;
		free(ptr);
	}
	else if(y==2)
	{
		ptr=last;
		printf("%d is deleted \n",ptr->info);
		last=last->back;
		last->forw=0;
		free(ptr);
	}
	else if(y==3)
	{
		printf("Enter the position of the node you want to delete = \n");
		scanf("%d",&p);
		j=1;
		ptr = start;
		while(j<p) //we will reach the node we want to delete
		{
			ptr=ptr->forw;
			j++;
		}
		printf("%d is deleted \n",ptr->info);
		ptr->back->forw=ptr->forw;
		ptr->forw->back=ptr->back;
		free(ptr);
	}
	else
	{
		printf("Invalid choice! \n");
	}
}
}

void main()
{
system("color f0");
int c;
create();
display();	
printf("\n");
while(c!=0)
{
printf("To INSERT a node press 1... To DELETE a node press 2... To display press 3... To exit press 0... \n");
scanf("%d",&c);
if(c==1)
{
	insert();
}
else if(c==2)
{
	del();
}
else if(c==3)
{
	display();
}
else
{
	printf("Thank You!");
}
}
}