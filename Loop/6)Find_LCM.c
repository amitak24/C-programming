/*Write a Program to Find LCM of two numbers entered by user*/

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter First Number:");
    scanf("%d",&a);
    printf("Enter Second Number:");
    scanf("%d",&b);

     int lcm;
    if(a>b)
        lcm=a;
    else
        lcm=b;
    while(1)
    {
        if(lcm%a==0 && lcm%b==0)
        {
            printf("The LCM Of Given Number is %d",lcm);
            break;
        }
        lcm++;
    }

    return 0;
}