#include <stdio.h>
struct prime
	{
		int x,z;
	}number;

void isPrime()
{ 
    for(int u=2;u<number.x;u++)
    {
        if(number.x % u == 0)
        {
            number.z=1;
            break;
        }
    }
}
int main()
{
    scanf("%d",&number.x);
    isPrime();
    if (number.x==1)
    {
        printf("1 is not prime\n");
    }
    else if(number.z==1)
    {    
        printf("%d is not prime\n",number.x);
    }
    else
    {
        printf("%d is prime\n",number.x);
    }
return(0);
}