//แยกเลขคู่คี่
#include <stdio.h>
int main()
{
	long double x;
    int y;
    scanf("%Lf",&x);
    y = (int)x;
    if (x!=y)
    {
        printf("Error\n");
    }
    else if(y%2==0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
return(0);
}# study
