/*Write a Program to Check Whether a Number N entered by user is
Palindrome or Not*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    int c=n,sum=0,r;

    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(c==sum)
    {
        printf("The given number is PALINDROME");
    }
    else
    {
        printf("The given number is NOT a PALINDROME");
    }

    return 0;
}