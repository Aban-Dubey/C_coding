#include<stdio.h>
#include <stdlib.h>
void main()
{
	system("color f0");
	int matrix[3][3],i,j;
	printf("Enter elements of 3x3 matrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the elemets for [%d][%d] : ",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("\nThe elements of 3x3 matrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
}