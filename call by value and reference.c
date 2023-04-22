#include <stdio.h>
#include <stdlib.h>
void call_by_value(int m, int n) //the copy of actual parameters is used to perform operations
{
	m = m+n;
	printf("The values of m and n are = %d %d \n",m,n);
}

void call_by_ref(int *a, int *b) //operations are performed on the values at address of the actual parameters
{
	*a = *a+*b;
	printf("The values of a and b are = \n");
	printf("%d %d \n",*a,*b);
}

void main()
{
	system("color f0");
	int x,y;
	printf("Enter the value of x = \n");
	scanf("%d",&x);
	printf("Enter the value of y = \n");
	scanf("%d",&y);
	call_by_value(x,y); //original values of x and y are not altered
	printf("The values of x and y after calling call by value are = %d %d \n",x,y);
	call_by_ref(&x,&y); //original values of x and y are altered
	printf("The values of x and y after calling call by reference are = %d %d \n",x,y);
}