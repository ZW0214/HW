#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a,b;
	
	
	while (1)
	{
		printf("Enter sales in dollars(-1 to end):");
		scanf_s("%f", &a);
		if (a < 0)
		{
			return 0;
		}
		b = a * 1.09 + 200;
		printf("Salary:%f\n\n", b);
		if (a == -1)
			break;
	}

}