#include <stdio.h>
int main()
{
	//Declaring and initializing the required variables.
	int i,j,k;
	int duplicate[5];
	int a[5];
	//Taking 5 integers as input from the user.
	printf("Enter 5 integers in the array = \n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	//Searching for the duplicate elements.
	printf("The duplicate elements are = \n");
	for(j=0;j<=4;j++)
	{
		for(k=j+1;k<=4;k++)
		{
		if(a[j]==a[k])
		{
			printf("%d \n",a[k]); //Printing the duplicate elements.
		}
		}
	}
	return 0;
}