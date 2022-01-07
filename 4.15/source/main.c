#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int c;
	float a,b,d ;
	b = 1.1;
	d = 1.1;

	a= 5000;
	for (c = 1; c <= 15; c++)
	{
		a = a * d;
		printf("%f\n", a);
		d = b + 0.005*c;
	}
}