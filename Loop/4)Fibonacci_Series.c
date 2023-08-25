/*) Write a Program to Display Fibonacci Series up to nth term (n is entered by
user)*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter value for n:");
    scanf("%d",&n);

    int a=0,b=1,c,i;
    printf("The Fibonacci Series is:%d %d ",a,b);
    for(i=3;i<=n;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }


    return 0;
}