#include <stdio.h>
#include <string.h>
struct Text
{
	char x[100];
	int n, i, y;
}text;
void check(char x[100], int n, int y)
{
	struct Text* T= &text;
	for (T->i = 0; T->i < T->n; T->i++)
	{
		if (T->x[T->i] >= 97 && T->x[T->i] <= 122)
		{
			if (T->x[T->i] > T->x[T->i + 1])
			{
				T->y = T->x[T->i];
				T->x[T->i] = T->x[T->i + 1];
				T->x[T->i + 1] = T->y;
				T->i = 0;
			}
		}
	}
}
int main()
{
	struct Text* T = &text;
	scanf_s("%s", T->x, 99);
	T->n = strlen(T->x);
	check(T->x, T->n, 'T->y');
	for (T->i = 0; T->i <= T->n; T->i++)
	{
		printf("%c", T->x[T->i]);
	}
	printf("\n");
	return 0;
}
