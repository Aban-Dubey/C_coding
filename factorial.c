#include <stdio.h>
 int fact(int n)
 {
 	if(n>=1)
 	{
 		return n*fact(n-1);
	}
	else
	{
		return 1;
	}
 }
 
 void main()
 {
 	int x;
 	printf("Enter the number = \n");
 	scanf("%d",&x);
 	printf("The factorial of given number is = \n");
 	int f = fact(x);
	printf("%d",f);
 }