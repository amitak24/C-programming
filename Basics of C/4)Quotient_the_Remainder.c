/* Write a program where the user is asked to enter two
integers (divisor and dividend) and the quotient and the
remainder of their division is computed. (Both divisor and
dividend should be integers.)*/

#include<stdio.h>

int main()
{
    int a,b;

    printf("ENTER THE DIVIDENT:");
    scanf("%d",&a);
    printf("ENTER THE DIVISOR:");
    scanf("%d",&b);

    printf("Quotient:%d\n",a/b);
    printf("Remainder:%d",a%b);
    
    return 0;
}