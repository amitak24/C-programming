/*Write a Program to Find GCD or HCF of two numbers entered by user*/

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter First Number:");
    scanf("%d",&a);
    printf("Enter Second Number:");
    scanf("%d",&b);

    int i,result;
    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            result=i;
        }
    }
    printf("GCD of Given Numbers is %d",result);

    return 0;
}