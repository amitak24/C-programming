/*Write a Program to check whether a number entered by the user is an
Armstrong number or not.*/

#include<stdio.h>
int main()
{
    int n,arm=0;
    printf("Enter the Number:");
    scanf("%d",&n);
    int c=n;

    while(n>0)
    {
        int a=n%10;
        arm=(a*a*a)+arm;
        n/=10;
    }
    if(c==arm)
    {
        printf("It is Armstrong Number");
    }
    else
    {
        printf("It is Not Armstrong Number");
    }

    return 0;
}