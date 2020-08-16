#include <stdio.h>
int level;
void moretriangle (int n){
    for(int row=0;row<level;row++)
    {
        for(int star=0;star<row+1;star++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void lesstriangle (int n){
    for(int row = 0;row<=level;row++)
    {
       for(int star = level-(row-1);star>0;star--)
       {
           printf("* ");
       }
        printf("\n");
    }
}
int main()
{   
    scanf("%d",&level);
    moretriangle(level);
    lesstriangle (level);

    return(0);
}