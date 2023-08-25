/*Write a Program to Find Factorial of a given number N (N is entered by
user)*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter Value for n:");
    scanf("%d",&n);

    int i,fact=1;
    for(i=1;i<=n;i++)
    {
       fact=fact*i; 
    }
    printf("The Factorial Of %d is %d",n,fact);

    return 0;
}