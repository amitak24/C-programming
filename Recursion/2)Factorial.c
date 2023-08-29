//Write a Program to Calculate Factorial of a Number Using Recursion

#include<stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("Enter Value:");
    scanf("%d",&n);

    printf("Factorial is : %d",fact(n));

    return 0;
}
int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return fact(n-1)*n;
    }

}