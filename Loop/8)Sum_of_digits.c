/* Write a Program to display sum of all digits of a given Number N by user*/

#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the Number:");
    scanf("%d",&n);

    while(n>0)
    {
        int r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("The Sum is %d",sum);

    return 0;
}