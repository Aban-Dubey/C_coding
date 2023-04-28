#include <stdio.h>
#include <stdlib.h>
void main()
{
	system("color f0");
	int i,n,sum;
	float avg;
	printf("Enter the number of elements in array: \n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements in array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	i=0;
	for(i=0;i<n;i++)
	{
		sum+=arr[i];	
	}
	printf("The sum of the elements of array = %d \n",sum);
	avg = sum/n;
	printf("The average of elements of array = %f",avg);
}