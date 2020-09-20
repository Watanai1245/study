#include<stdio.h>
#include<string.h>
struct Unique
{
	char x[100];
	int i, n;
}uni;

void unique(char x[100],int i,int n)
{
	struct Unique* p1 = &uni;
	for (p1->i=0;p1->i < p1->n; p1->i++)
	{
		if (p1->i == 0)
		{
			printf("%c", p1->x[0]);
		}
		else if (p1->i > 0) 
		{
			if (p1->x[p1->i] != p1->x[p1->i - 1])
			{
				printf("%c", p1->x[p1->i]);
			}
		}
	}
}
int main()
{
	struct Unique* p1 = &uni;
	printf("Enter letters or numbers: ");
	scanf_s("%s", p1->x, 99);
	p1->n = strlen(p1->x);
	unique(p1->x,p1->i,p1->n);
	return 0;
}
