#include <stdio.h>
struct triangle
{
    int level;
}print;

void moretriangle(int n) 
{
    struct triangle* p1 = &print;
    for (int row = 0; row < p1->level; row++)
    {
        for (int star = 0; star < row + 1; star++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void lesstriangle(int n) 
{
    struct triangle* p1 = &print;
    for (int row = 0; row <= p1->level; row++)
    {
        for (int star = p1->level - (row - 1); star > 0; star--)
        {
            printf("* ");
        }
        printf("\n");
    }
}
int main()
{
    struct triangle* p1 = &print;
    scanf_s("%d", &p1->level);
    moretriangle(p1->level);
    lesstriangle(p1->level);

    return(0);
}
