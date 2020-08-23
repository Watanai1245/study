#include <stdio.h>
int main()
{
    int x=0,y=0,sum=0;
    printf("Enter first integer number : ");
    scanf("%d",&x);
    printf("Enter second integer number : ");
    scanf("%d",&y);
    if(x!=y)
    {
        if (x<y)
        {
            int i=x;
            while(i<=y)
            {
                printf("%d ",i);
                i++;
            }
            printf("\n");
            for(;x<=y;)
            {
                sum += x;
                x++;
            }
            printf("Total is %d\n",sum);
        }
        else if (x>y)
        {
            int i=y;
            while(i<=x)
            {
                printf("%d ",i);
                i++;
            }
            printf("\n");
            for(;y<=x;)
            {
                sum += x;    
                x--;
            }
            printf("Total is %d\n",sum);
        }
    }
    else 
    {
        printf("%d %d\n",x,x);
        printf("Total is %d\n",(x+x));
    }
    return(0);
}
