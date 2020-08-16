#include <stdio.h>
int main()
{
    long double x,y;
    scanf("%Lf",&x);
    if(x>0)
    {
        long long z,a,b;
        y=(10.00*x)/20.00;
        b=(int)y;
    	if(b!=y)
        {
        	a=b%7;
            z=b/7;
            if(a>=0&&a<6)
            {
                printf("Takes about %lli weeks %lli days\n",z,++a);
            }
            else printf("Takes about %lli weeks 0 days\n",++z);
        }
        else
        {
        	z=b/7;
            a=b%7;
        	printf("Takes about %lli weeks %lli days\n",z,a);
        }
    }
    else printf("ERROR\n");

    return(0);
}