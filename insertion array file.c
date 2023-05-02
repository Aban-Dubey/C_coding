#include <stdio.h>
#include <stdlib.h>
int arr[51];
int size;
int item;
int loc;
void input()
{
	int j;
	printf("Enter the size of array from 1 to 50 = \n");
	scanf("%d",&size);
	printf("Enter the elements in array = \n");
	for(j=1;j<=size;j++)
	{
		scanf("%d",&arr[j]);
	}	
	printf("Enter the item to insert = \n");
	scanf("%d",&item);
	printf("Enter the location at which the item is to be inserted = \n");
	scanf("%d",&loc);
}

void insertion(int it, int l)
{
	int i;
	i=size;
	while(i>=l)
	{
		arr[i+1]=arr[i];
		i--;
	}
	arr[l]=it;
	size++;
}

void display()
{
	int s;
	printf("The array after insertion is = \n");
	for(s=1;s<=size;s++)
	{
		printf("%d ",arr[s]);	
	}
}

void main()
{
	system("color f0");
	input();
	insertion(item,loc);
	display();
}