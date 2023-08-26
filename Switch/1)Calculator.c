/*Write a Program to Make a Simple Calculator to Add, Subtract, Multiply or
Divide Using Switch case The program should takes an arithmetic operator (+,
-,*, /) and two operands from a user and performs the operation on those
two operands depending upon the operator entered by the use*/

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter The Operator Sign:");
    scanf("%c",&ch);
    int a,b;
    printf("Enter First Value:");
    scanf("%d",&a);
    printf("Enter Second Value:");
    scanf("%d",&b);

    switch(ch)
    {
        case '+':
                printf("The Sum of %d and %d is %d",a,b,a+b);
                break;

        case '-':
                printf("The Substraction of %d and %d is %d",a,b,a-b);
                break;

        case '*':
                printf("The Multiplication of %d and %d is %d",a,b,a*b);
                break;

        case '/': 
                printf("The Division of %d and %d is %d",a,b,a/b);
                break;

        default:
                printf("Sorry!! You entered wroung key");
                break;
    }
    
    return 0;
}