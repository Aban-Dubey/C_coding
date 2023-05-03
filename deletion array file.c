#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int arr[50];
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
	printf("Enter the location at which the item is to be deleted = \n");
	scanf("%d",&loc);
}

void deletion(int l)
{
	int i;
	item = arr[l];
	i=l;
	while(i<size)
	{
		arr[i] = arr[i+1];
		i++;
	}
	size--;
}

void display()
{
	int s;
	printf("The item deleted is = %d \n",item);
	printf("The array after deletion is = \n");
	for(s=1;s<=size;s++)
	{
		printf("%d ",arr[s]);	
	}
}

void main()
{
	system("color f0");
	input();
	deletion(loc);
	display();
}
