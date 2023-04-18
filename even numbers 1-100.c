#include <stdio.h>
main()
{
	int n = 100;
	int i;
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		printf("%d \n",i);
		else
		continue;
	}
	printf("\a");
}