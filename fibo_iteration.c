#include <stdio.h>
void main()
{
	//Initializing the required varialbles.
	int n1=0;
	int n2=1;
	int n3;
	int i;
	int m;
	//Taking input the number of elements to be printed.
	printf("Enter the number of elements to be printed = ");
	scanf("%d",&m);
	//Printing the first 2 elements of the series.
	printf("%d \t %d \t",n1,n2);
	//Calculating and printing the remaining series.
	for(i=2;i<m;i++)
	{
		n3=n1+n2;
		printf("%d \t",n3);
		n1=n2;
		n2=n3;	
	}
}