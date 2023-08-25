/*Write a Program to Calculate Power of a Number without using inbuilt
pow() function by taking two inputs from users as Base and exponent
respectively*/

#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter value for Base:");
    scanf("%f",&a);
    printf("Enter value for Exponent:");
    scanf("%f",&b);

    float i,result=1;
    for(i=1;i<=b;i++)
    {
        result=result*a;
    }
    printf("The Result is %f",result);

    return 0;
}