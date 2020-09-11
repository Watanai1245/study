#include <stdio.h>
struct sort
{
	int n,i;
	int num[100];
	int x, y;
}n1;

void number(int num[100])
{
	for (n1.i = 0; n1.i < n1.n;)
	{
		if (n1.num[n1.i] && n1.num[n1.i] > n1.num[n1.i + 1])
		{
			n1.x = n1.num[n1.i + 1];
			n1.num[n1.i + 1] = n1.num[n1.i];
			n1.num[n1.i] = n1.x;
			n1.i = 0;
		}
		else
		{
		++n1.i;
		}
	}
}
int main()
{
	printf("Enter number size : ");
	scanf_s("%d",&n1.n);
	for (n1.i = 0; n1.i < n1.n; ++n1.i)
	{
		scanf_s("%d",&n1.num[n1.i]);
	}
	number(n1.num);
	for (n1.i = 1; n1.i <= n1.n; ++n1.i)
	{
		printf("%d ", n1.num[n1.i]);
	}
	return 0;
}
