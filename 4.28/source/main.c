#include<stdio.h>
#include<stdlib.h>

int a;
float b = 1000;
float c = 150;
float d = 50;
float e, f;
int main(void)
{
	while (1 == 1)
	{
		printf("Enter  1  is managers\n");
		printf("Enter  2  is hourly workers\n");
		printf("Enter  3  is commission workers\n");
		printf("Enter  4  is pieccworker\n");
		printf("Enter -1  to end");
		scanf_s("%d", &a);
		if (a == -1)
			break;
		switch (a)
		{
		case 1:
			printf("Salary is $%.2f\n\n", b);
			break;
		case 2:
			printf("Enter # of hours worked :");
			scanf_s("%f", &e);

			if (e <= 40)
			{
				f = e * c;
			}
			else
			{
				f = c * 40 + c * 1.5*(e - 40);
			}
			printf("Salary is $%.2f\n\n", f);
			break;
		case 3:
			printf("Enter # of gross weekiy sales :");
			scanf_s("%f", &e);
			f = 250 + (e*0.057);
			printf("Salary is $%.2f\n\n", f);
			break;
		case 4:
			printf("Enter # of items they produce :");
			scanf_s("%f", &e);
			f = e * d;
			printf("Salary is $%.2f\n\n", f);
			break;

		}
	}


	system("pause");
	return 0;
}