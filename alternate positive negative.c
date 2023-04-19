#include <stdio.h>
main()
{
	//Intializing the required vairiables.
	int i,j,k,l=0;
	int n1=0;
	int n2=0;
	int n3=0;
	int n4=0;
	int a[10];
	int pos[5];
	int neg[5];
	int alt[10];
	
	//Taking the values in the array.
	printf ("Enter 5 positive and 5 negative integers = \n");
	while(l<=9)
	{
		scanf("%d",&a[l]);
		l++;
	}
	
	//Making 2 seperate arrays of negative and positive digits.
	for(i=0;i<=9;i++)
	{
		if(a[i]<0)
		{
			neg[n1++] = a[i];
		}
		else
		{
			pos[n2++]=a[i];
		}
	
	}
	
	//Combining the negative and positive arrays with negative elements at odd indices and positive elements at even indices.
	for(k=0;k<=9;k++)
	{
		if(k%2==0)
		alt[k]=pos[n3++];
		else
		alt[k]=neg[n4++];
	}
	
	//Printing the combined array.
	printf("Alternate positive and negative = \n");
	for(int s=0;s<=9;s++)
	{
		printf("%d ",alt[s]);
	}
}