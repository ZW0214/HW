#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, c, d, e, f;
	float b, g;
	while (1)
	{
	printf("Enter account number(-1 to end):");
	scanf_s("%d", &a);
	if (a < 0)
	{
		printf("¿é¤J¿ù»~");
		return 0;
	}
	printf("Enter beginning balance:");
	scanf_s("%f", &b);
	printf("Enter total charges:");
	scanf_s("%d", &c);
	printf("Enter total credits:");
	scanf_s("%d", &d);
	printf("Enter credit limit:");
	scanf_s("%d", &e);
	g = b + c - d;
	printf("Account:%d\n", a);
	printf("Credit limit:%d\n", e);
	if (g > b)
	{
		printf("Balance:%f\n", g);
		printf("Credit limit Exceded.\n\n");
	}
	if (a == -1)
		break;
	}
}