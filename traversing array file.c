#include <stdio.h>
#include <stdlib.h>
int arr[50];
int size;

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
}

void mult(int x)
{
	int m = x*10;
	printf("%d ",m);
}

void main()
{
	system("color f0");
	input();
	int i;
	printf("The multiplication of each element in array with 10 is = \n");
	for(i=1;i<=size;i++)
	{
		mult(arr[i]);
	}
}