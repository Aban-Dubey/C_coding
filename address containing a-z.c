#include <stdio.h>
void main()
{
	char address[10];
	printf("Enter the address in 10 characters = ");
	scanf("%[a-z]", &address);
	int i;
	for(i=0;i<=9;i++)
	{
	printf("%c",&address[i]);
}
}