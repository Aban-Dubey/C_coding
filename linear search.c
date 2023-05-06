#include <stdio.h>
void main()
{
	//Initializing the required variables.
	int a[10];
	int i,j;
	int item;
	int loc=-1;
	//Taking 10 elements as input from user.
	printf("Enter 10 integers in the array = \n");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	//Taking the search item as input from user.
	printf("Enter the item to search = \n");
	scanf("%d",&item);
	//Searching for the location of item using linear search technique.
	for(j=0;j<=9;j++)
	{
		if(a[j]==item)
		{
			loc = j+1;
		}
	}
	//Successful case.
	if(loc!=-1)
	{
	printf("The element is fount at the location = ");
	printf("%d",loc);
	}
	//Unsuccessful case.
	else
	printf("The element cannot be found!");	
}