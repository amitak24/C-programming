/* Write a Program to Find G.C.D of two numbers entered by user Using 
Recursion*/

#include<stdio.h>
int gcd(int a,int b);
int main()
{
    int a,b;
    printf("Enter first Number:");
    scanf("%d",&a);
    printf("Enter second Number:");
    scanf("%d",&b);

    printf("The GCD is:%d",gcd(a,b));

    return 0;
}

int gcd(int a,int b)
{
     if(a==b || a%b==0)
    {
        return b;
    }
    else if(b%a==0)
    {
        return a;
    }
    else if(a>b)
    {

        return gcd(a%b,b);
    }
    else
    {
        return gcd(a,b%a);
    }
}