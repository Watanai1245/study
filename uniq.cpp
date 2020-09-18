#include <stdio.h>
#include <string.h>
struct Uniq
{
	char x[100];
	int i, j, y, n;
}text;

void word1(char x[100],int i, int j,int y, int n)
{
	struct Uniq* p = &text;
	for (p->i = 0; p->i < n; p->i++)
	{
		p->y = 1;
		for (p->j = p->i + 1; p->j < p->n; p->j++)
		{
			if (p->x[p->i] == p->x[p->j] && p->x[p->i] != '\0')
			{
				p->y++;
				p->x[p->j] = '\0';
			}
		}
		if (p->x[p->i] != '\0')
		{
			printf("%c", p->x[p->i]);
		}
	}
}

int main()
{
	struct Uniq* p = &text;
	scanf_s("%s", p->x, 99);
	p->n = strlen(p->x);
	word1(p->x, p->i, p->j, p->y, p->n);
	return 0;
}