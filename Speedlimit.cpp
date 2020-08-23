#include <stdio.h>
float t,x,v1,v2;
void speed (float x)
{
    v1 = 15.000000/x;
    v2 = v1*(18/5);
    if(t==1)
    {
        if(v2>120)
        {
            printf("Speed of your vehicle : %.1f km/hr\n",v2);
            printf("Exceed the speed limit\n");
        }
        else
        {
            printf("Speed of your vehicle : %.1f km/hr\n",v2);   
        }
        
    }
    if(t==2)
    {
        if(v2>100)
        {
            printf("Speed of your vehicle : %.1f km/hr\n",v2);
            printf("Exceed the speed limit\n");
        }
        else
        {
            printf("Speed of your vehicle : %.1f km/hr\n",v2);   
        }
    }
    if(t==3)
    {
        if(v2>80)
        {
            printf("Speed of your vehicle : %.1f km/hr\n",v2);
            printf("Exceed the speed limit\n");
        }
        else
        {
            printf("Speed of your vehicle : %.1f km/hr\n",v2);   
        }
    }
}

int main()
{
    printf("\n  Calculating vehicle speed on expressways.\n");
    printf(" Vehicle type\n");
    printf("Type [1] --> 4 wheels vehicle.\n");
    printf("Type [2] --> 6 more wheels vehicle.\n");
    printf("Type [3] --> 6 or more wheels vehicle.\n");
    printf("\nEnter number vehicle type : ");
    scanf("%f",&t);
    if(t==1 || t==2 || t==3)
    {
        printf("\nTime of movement over a distance of 15 m. (Second unit) : ");
        scanf("%f",&x);
        speed(x);
    }
    else
    {
        printf("\nError\n");
        printf("Please enter the correct type of vehicle.\n");
    }
    return(0);
}