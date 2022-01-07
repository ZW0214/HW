#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j, a;
	printf("(a)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");

	}
	printf("\n");
	printf("(b)\n");
	for (i = 10; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	printf("(c)\n");
	for (i = 10; i >= 1; i--)
	{
		for (a = 1; a <= 10-i; a++)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	printf("(d)\n");
	for (i = 1; i <= 10; i++)
	{
		for (a = 1; a <= 10 - i; a++)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}