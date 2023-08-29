/*Write a Program to Find Sum of N Natural Numbers (entered by users) 
using Recursion*/

#include<stdio.h>
int sum();
int main()
{
    int n;
    printf("Enter value for N:");
    scanf("%d",&n);

    printf("Sum is %d",sum(n));

    return 0;
}
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return sum(n-1)+n;
    }
}