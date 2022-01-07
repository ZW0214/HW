#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j, b, l;
	printf("Enter breadth:");
	scanf_s("%d", &b);
	printf("Enter length:");
	scanf_s("%d", &l);
	for (i=1;i<=l; i++)
	{
		for (j = 1; j <= b; j++)
		{
			if (i == 1 || i == l || j == 1 || j == b)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			
		}
		printf("\n");
	}
}