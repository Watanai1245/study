#include <stdio.h>
float x;
void triangle (float n)
{
    for(float i=0;i<n;i++)
    {
        if(((int)i)%2==0 && n==(int)n)
        {
            for(int a=0;a<n;a++)
            {
                if(a%2==0)
                {
                    printf("*");
                }
                if(a%2==1)
                {
                    printf("_");
                }
            }
            printf("\n");
        }
        if(((int)i)%2==1 && n==(int)n)
        {
            for(int a=0;a<x;a++)
            {
                if(a%2==0)
                {
                    printf("_");
                }
                if(a%2==1)
                {
                    printf("*");
                }
            }
            printf("\n");
        }
        if(n!=(int)n)
        {
            printf("error\n");
            break;
        }
    }
}
int main()
{
    printf("Enter number : ");
    scanf("%f",&x);
    triangle(x);
    return(0);
}