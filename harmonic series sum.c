#include <stdio.h>
main()
{
int n=6;
int i;
double reciprocal=0.0;
double sum = 1.0;
/*printf("Enter a number = ");
scanf("%d",&n);8*/
for(i=2;i<=n;i++)
{
	reciprocal=reciprocal+1/i;
	//printf("%d \n ", 1/i);
  sum=sum+reciprocal;	
}
printf("The sum of harmonic series is = %5.2f ",sum);
}