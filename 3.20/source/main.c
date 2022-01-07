#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	while (1)
	{
		float a, b, c;
		printf("Enter # of hour worked (-1 to end):");
		scanf_s("%f", &a);
		if (a < 0)
			return 0;
		printf("Enter hourly of the worker:");
		scanf_s("%f", &b);
		if (a <= 40)
		{
			c = b * a;
			printf("Salary is %f\n", c);
		}
		else if (a>40)
		{
			c = (a - 40)*5 +a * b;
			printf("Salary is %f\n\n", c);
		}
			
		
	}
}