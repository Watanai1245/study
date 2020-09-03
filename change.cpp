#include <stdio.h>

int strlen(char x[1000]);



struct change
    {
        char x[1000];
        int n,c,i;
    }text,num;



int main()
{

    scanf("%s",text.x);
    num.n = strlen(text.x);
    for(int i=0;i<=num.n;i++)
    {
        if(text.x[i]>=65 && text.x[i]<=90)
        {
            printf("%c",text.x[i]); 
        }
    }
    printf("\n");
    return(0);
}



int strlen(char x[1000]) 
{
    int a = 0, sum = 0;
    char c = x[a];

    while(c != '\0') 
    {
            sum++;
            c = x[a];
            a++;
    }
    return sum;
}