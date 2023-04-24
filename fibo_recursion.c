#include <stdio.h>
#include <stdlib.h>
int fibo(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return fibo(n-1)+fibo(n-2);
	}
}

void main()
{
	system("color f0");
	int num,i;
	printf("Enter the number of elements to be present in fibonacci series: ");
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	{
		printf("%d ",fibo(i));
	}
}