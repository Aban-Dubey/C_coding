#include <stdio.h>
#include <stdlib.h>
int arr[51];
int count = 0;
int size;

void input()
{
	int s;
	//Taking size of array as input from user.
	printf("Enter the size of array from 1 to 50 = \n");
	scanf("%d",&size);
	printf("Enter the elements in array = \n");
	for(s=0;s<size;s++)
	{
		scanf("%d",&arr[s]);
	}
	
	//Taking the item to search as input.
	printf("Enter the item to search = \n");
	scanf("%d",&arr[size]);	
}

void display(int c)
{
	c=count;
	if(c<size)
	{
	printf("The element is fount at the location = ");
	printf("%d",c);
	}
	
	//Unsuccessful case.
	else
	printf("The element cannot be found!");		
}
void main()
{
	system("color f0");
	input();
	int i,j,s;
	
	//Searching for the location of the item using linear search technique(approach second).
	for(j=0;j<=size;j++)
	{
			count++;
			if(arr[size]==arr[j])
			break;
	}
	display(count);
}