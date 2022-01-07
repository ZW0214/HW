#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, c;
	for (a = 1; a <= 5; a++)
	{
		for (b = 4; b >= a; b--)
			printf(" ");
		for (c = 1; c <= 2*a-1; c++)
			printf("*");
		printf("\n");
	}
	for (a = 1; a <= 4; a++)
	{
		for (b = 1; b <= a; b++)
			printf(" ");
		for (c = 1; c <= 2 * (5-a) - 1; c++)
			printf("*");
		printf("\n");
	}
}