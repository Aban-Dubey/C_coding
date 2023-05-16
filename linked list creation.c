#include <stdio.h>
#include <malloc.h>
void main()
{
	int choice =1;
	struct node
	{
		int info;
		struct node *link;
	};
	struct node *start, *newnode, *ptr;
	start = 0;
	while(choice==1)
	{
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter info = ");
	scanf("%d",&newnode->info);
	newnode->link = 0;
	if(start==0)
	{
		start = newnode;
		ptr = newnode;
	}
	else
	{
		ptr->link = newnode;
		ptr = newnode;
	}
	printf("Do you want to continue(0/1)?");
	scanf("%d",&choice);
	}
	printf("Your data in linked list is = \n");
	ptr = start;
	while(ptr!=0)
	{
		if(ptr->link!=0)
		{
		printf("%d->",ptr->info);
		}
		else
		{
			printf("%d",ptr->info);
		}
		ptr = ptr->link;
	}
	}
	