#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	while (1)
	{
		float a, b, c, d;
		printf("Enter loan principal (-1 to end):");
		scanf_s("%f", &a);
		if (a < 0)
			return 0;
		printf("Enter interest rate:");
		scanf_s("%f", &b);
		printf("Enter term of the loan in day:");
		scanf_s("%f", &c);
		d = a *  b*c / 365;
		printf("The interest chatge is $%f\n\n", d);
	}
}