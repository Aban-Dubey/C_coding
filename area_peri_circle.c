#include <stdio.h>
#include <stdlib.h>
void compute_circle(float *area, float *perimeter, float r)
{
	float pi=3.14;
	*area = pi*r*r;
	*perimeter = 2*pi*r;
}

void main()
{
	system("color f0");
	float radius,area,perimeter;
	printf("Enter the radius of the circle: \n");
	scanf("%f",&radius);
	compute_circle(&area,&perimeter,radius);
	printf("The area of the circle is = %f \n",area);
	printf("The perimeter of the circle is = %f \n",perimeter);
}