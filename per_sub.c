#include <stdio.h>
void main()
{
	int sub[6], i;
	float per;
	int sum=0;
	printf("Enter the marks of six subjects out of 100: \n");
	for(i=0;i<6;i++)
	{
		scanf("%d",&sub[i]);
	}
	for(i=0;i<6;i++)
	{
		sum+=sub[i];
	}
	per=sum/6;
	printf("The aggregate marks are = %d \n",sum);
	printf("The percentage is = %f \n",per);	
}