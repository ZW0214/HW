#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	float a, b, c;
	for (a = 1; a <= 500; a++)
	{
		for (c = a; c <= 500; c++)
		{
			b = sqrt((c*c) + (a*a));
			if (b < 500 && b == (int)b)
			{
				printf("%f\n", b);
			}
		}
	}
}