/*Write a Program to Calculate Power of a Number using inbuilt pow()
function by taking two inputs from users as Base and exponent respectively*/

#include<stdio.h>
#include<math.h>
int main()
{    
    float a,b;
    printf("Enter value for Base:");
    scanf("%f",&a);
    printf("Enter value for Exponent:");
    scanf("%f",&b);

    float result;
    result= pow(a,b);

    printf("The Result is %f",result);

    return 0;
}