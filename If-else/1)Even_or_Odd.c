/*Write a Program to Check Whether Number is Even or
Odd*/

#include<stdio.h>
int main()
{
     int a;
     printf("enter a value:");
     scanf("%d",&a);

     if(a%2==0)
     {
        printf("The given Number is Even");
     }
     else
     {
        printf("The given Number is Odd");
     }

    return 0;
}