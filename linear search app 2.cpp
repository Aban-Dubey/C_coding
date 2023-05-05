#include <stdio.h>
main()
{
	//Initializing the required variables.
	int a[11];
	int i,j;
	int count = 0;
	int loc;
	//Taking 10 integers as input from user.
	printf("Enter 10 integers in the array = \n");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	//Taking the item to search as input.
	printf("Enter the item to search = \n");
	scanf("%d",&a[10]);
	//Searching for the location of the item using linear search technique(approach second).
	for(j=0;j<=10;j++)
	{
			count++;
			if(a[10]==a[j])
			break;
	}
	//Successful case.
	if(count<10)
	{
	printf("The element is fount at the location = ");
	printf("%d",count);
	}
	//Unsuccessful case.
	else
	printf("The element cannot be found!");	
}