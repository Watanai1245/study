#include <stdio.h>
#include <string.h>

struct text
{
	char x[100];
	int i, n, y = 0;
}num;

void check(char x[100], int i, int y, int n)
{
	struct text* palindrome = &num;
	for (palindrome->i = 0; palindrome->i < ((palindrome->n / 2)); palindrome->i++)
	{
		if (palindrome->x[palindrome->i] == palindrome->x[palindrome->n - palindrome->i - 1])
		{
			palindrome->y = palindrome->y + 1;
		}
		else
		{
			printf("Not Palindrome\n");
			break;
		}
	}
}


int main()
{
	struct text* palindrome = &num;
	printf("Enter text : ");
	scanf_s("%s", palindrome->x, 99);
	palindrome->n = strlen(palindrome->x);
	if (palindrome->n >= 3)
	{
		check(palindrome->x, palindrome->i, palindrome->y, palindrome->n);
		if (palindrome->y == (palindrome->n / 2))
		{
			printf("Palindrome\n");
		}
	}
	else if(palindrome->n < 3)
	{
		printf("Not Palindrome\n");
	}
	printf("%d", palindrome->n/2);
	
	return 0;
}