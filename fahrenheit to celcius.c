#include <stdio.h>
main()
{
	float ce,fa;
	printf("Enter the temperature in fahrenheit = \n");
	scanf("%f",fa);
	ce = (fa-32.0)/1.8;
	printf("The temperature in celcius is = %5.2f" ,ce);
}