/*) Write a Program to Generate Multiplication Table of a number (entered by
the user) using a for loop.*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter value For n:");
    scanf("%d",&n);

    int i,multi=1;
    for(i=1;i<=10;i++)
    {
        multi=n*i;
        printf("%d\n",multi);
    }

    return 0;
}