#include <stdio.h>

struct sort
{
    int num[100];
    int a = 1, b = -100;
    int isHaveSolution = 0;
}number;

void check(int num[100]) 
{
    struct sort* n1 = &number;
    while (n1->a <= 100) {
            if (n1->num[1] % n1->a == 0) {
                n1->b = -100;
                while (n1->b <= 100) {
                    if (n1->b != 0 && n1->num[3] % n1->b == 0) {
                        if (n1->a * (n1->num[3] / n1->b) + n1->b * (n1->num[1] / n1->a) == n1->num[2]) {
                            printf("Factor = (%dx%+d)(%dx%+d)\n", n1->a, n1->b, n1->num[1] / n1->a, n1->num[3] / n1->b);
                            n1->isHaveSolution = 1;
                            break;
                        }
                    }
                    else if (n1->num[3] == 0) {
                        printf("Factor = (%dx%+d)(%dx%+d)\n", n1->a, 0, n1->num[1] / n1->a, n1->num[2] / n1->a);
                        n1->isHaveSolution = 1;
                        break;
                    }
                    n1->b++;
                }
            }
            if (n1->isHaveSolution) break;
            n1->a++;
        }
}
int main() 
{
    struct sort* n1 = &number;
    printf("\"Polynomial factorization Ax^2 + Bx + C = 0\"\n\n");
    printf("                Example\n");
    printf("           x^2 + 5x + 6 = 0\n");
    printf("         A = 0 , B = 5 , C = 6\n\n");
    printf("---------------------------------------------\n\n");
    printf("Enter A: "); scanf_s("%d", &n1->num[1]);
    printf("Enter B: "); scanf_s("%d", &n1->num[2]);
    printf("Enter C: "); scanf_s("%d", &n1->num[3]);
    printf("\n");
    check(n1->num);
    printf("%s", n1->isHaveSolution ? "" : "No Solution");

}
