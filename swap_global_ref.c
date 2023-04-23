#include <stdio.h>
#include <stdlib.h>
int a,b,c;
void swap_global(int j, int k)
{
	int l;
	l = j;
	j = k;
	k = l;
	a = j;
	b = k;
	printf("Swapped values of a and b are = \n");
	printf("%d and %d respectively",a,b);
}
void swap_ref(int *a,int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
	printf("The values of a and b after swapping are = \n");
	printf("%d and %d respectively",*a,*b);
}
void main()
{
	system("color f0");
	int choice;
	printf("Enter the value of a = \n");
	scanf("%d",&a);
	printf("Enter the value of b = \n");
	scanf("%d",&b);
	printf("Enter the choice: \n");
	printf("To swap using global variable press 1 \n");
	printf("To swap using call by reference press 2 \n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			swap_global(a,b);
			break;
		case 2:
			swap_ref(&a,&b);
			break;
	}
}