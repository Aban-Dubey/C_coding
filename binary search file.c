#include<stdio.h>
#include <stdlib.h>
int arr[50];
int loc;
int count=0;
int size;
int item;

void input()
{
	int s;	
	printf("Enter the size of array from 1 to 50 = \n");
	scanf("%d",&size);
	printf("Enter %d elements in array in ascending order only = \n",size);
	for(s=1;s<=size;s++)
	{
		scanf("%d",&arr[s]);
	}
	
	//Taking the search item as input.
	printf("Enter the item to search = ");
	scanf("%d",&item);
}

void display(int c)
{
	c=count;
	//Printing the location if the element is found.
	if(c>0)
	{
	printf("The element is found at the location = ");
	printf("%d",loc);
	}
	
	//Printing the message for the unsuccessful case.
	else
	{
	printf("The element could not be found!");
	}
}
void main()
{	
	system("color f0");
	input();
	
	//Searching for the location of element using the binary search technique.
	int beg=1;
	int mid;
	int end = size;
	while(beg<=end)
	{
		mid = (beg+end)/2;
		if(item==arr[mid])
		{
			count++;
			loc=mid;
			break;
		}
		else if(item<arr[mid])
		{
			end=mid-1;
		}
		else
		{
			beg=mid+1;
		}
	}
	display(count);
}	
	