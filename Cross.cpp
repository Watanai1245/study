#include<stdio.h>
using namespace std;

void cross(int x, int s)
{
	int w[2] = { s,1 };
	int* p1 = &w[0];
	int* p2 = &w[1];
	int a = 0, i = 0;
	int r1;
	if (x > 1)
	{
		while (*p1 > 0)
		{
			r1 = 0;
			while (r1 < a)
			{
				printf(" ");
				r1++;
			}
			i = 0;
			printf("*");
			while (i < *p1)
			{
				printf(" ");
				i++;
			}
			printf("*\n");
			*p1 = *p1 - 2;
			a++;
		}
		r1 = 0;
		while (r1 < a)
		{
			printf(" ");
			r1++;
		}
		printf("*\n");
		a--;
		while (*p2 <= s)
		{
			r1 = 0;
			while (r1 < a)
			{
				printf(" ");
				r1++;
			}
			i = 0;
			printf("*");
			while (i < *p2)
			{
				printf(" ");
				i++;
			}
			printf("*\n");
			*p2 = *p2 + 2;
			a--;
		}
	}
}

int main()
{
START:
	int x;
	printf("Enter number: ");
	scanf_s("%d",&x);
	int s = ((x - 1) * 2) - 1;

	if (x == 1)
	{
		printf("*");
	}
	if (x < 1)
	{
		printf("Can't enter number below 1.\n");
		goto START;
	}
	cross(x, s);

	return 0;
}