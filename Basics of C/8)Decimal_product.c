/*Write a Program to Multiply two decimal Numbers
entered by User*/

#include<stdio.h>
int main()
{
    float a,b;
    printf("enter first number:");
    scanf("%f",&a);
    printf("enter second number:");
    scanf("%f",&b);

    float c;
    c=a*b;
    printf("the product is %f",c);


    return 0;
}