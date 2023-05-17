#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct node
{
	int info;
	struct node *link;
};
struct node *start, *newnode, *ptr, *save, *temp;

void create()
{
	int choice =1;
	start = 0;
	while(choice==1)
	{
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter information = ");
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
	printf("Press 1 to CONTINUE and press 0 to STOP = ");
	scanf("%d",&choice);
	}
}

void display()
{
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
			printf("%d \n",ptr->info);
		}
		ptr = ptr->link;
	}
}

void insert()
{
	int pos; //to store the position of insertion for particular case.
	int i=1; //for loop;
	int x; //to store the choice of the user.
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter info = ");
	scanf("%d",&newnode->info);
	printf("Where do you want to insert the info = \n");
	printf("Press 1 for Beginning... Press 2 for end... Press 3 to insert after a particular node = \n");
	scanf("%d",&x);
	if(x==1)
	{
		newnode->link = start;
		start = newnode;
	}
	else if(x==2)
	{
	newnode->link = 0;
	ptr = start;
	while(ptr->link!=0)
	{
		ptr=ptr->link;	
	}
	ptr->link = newnode;
	}
	else if(x==3)
	{
		printf("Enter the position after which you want to insert = \n");
		scanf("%d",&pos);
		ptr = start;
		while(i<pos)
		{
			ptr = ptr->link;
			i++;	
		}
		newnode->link = ptr->link;	
		ptr->link = newnode;	
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
		ptr = start;
		start = start->link;
		printf("%d is deleted \n",ptr->info);
		free(ptr);
	}	
	else if(y==2)
	{
		save = start;
		ptr = start->link;
		while(ptr->link!=0)
		{
			save = ptr;
			ptr = ptr->link;
		}
		if(ptr==start) //the linked list has only one node
		{
			start = 0;
			printf("%d is deleted \n",ptr->info);
			free(ptr);
		}
		else
		{
		printf("%d is deleted \n",ptr->info);
		free(ptr);
		save->link = 0;
		}
	}
	else if(y==3)
	{
		printf("Enter the position of the node you want to delete = \n");
		scanf("%d",&p);
		j=1;
		ptr = start;
		while(j<p-1) //running the loop only till the previous node to the node at given location
		{
			ptr=ptr->link;
			j++;
		}
		 temp = ptr->link; //stroring the node at p in temp
		 ptr->link = temp->link;
		 printf("%d is deleted \n",temp->info);
		 free(temp);
	}
	else
	{
		printf("Invalid choice!");
	}
	}
}

void search()
{
	int y;
	int count=0;
	int item;
	int loc=0;
	printf("Enter the item to search = \n");
	scanf("%d",&item);
	printf("Press 1 if the list is unsorted... Press 2 if the list is sorted in ascending order... \n");
	scanf("%d",&y);
	if(y==1)
	{
		ptr=start;
		while(ptr!=0)
		{
			count++;
			if(item==ptr->info)
			{
				loc=count;
			}
			ptr=ptr->link;
		}
		if(loc!=0)
		{
			printf("The element is found at the location = %d \n",loc);
		}
		else
		{
			printf("The element could not be found! \n");
		}
	}
	else if(y==2)
	{
		ptr=start;
		while(item>=ptr->info)
		{
			count++;
			if(item==ptr->info)
			{
				loc=count;
			}
			else
			{
				loc=0;
			}
			ptr=ptr->link;
		}
		if(loc!=0)
		{
			printf("The element is found at the location = %d \n",loc);
		}
		else
		{
			printf("The element could not be found! \n");
		}
	}
	else
	{
		printf("Invalid choice! \n");
	}
}

void main()
{
system("color f0");
int c=1;
create();
display();	
printf("\n");
while(c!=0)
{
printf("To INSERT a node press 1... To DELETE a node press 2... To DISPLAY press 3... To SEARCH press 4... To EXIT press 0... \n");
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
else if(c==4)
{
	search();
}
else
{
	printf("Thank You! \n");
}
}
display();
}	