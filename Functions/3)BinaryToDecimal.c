/* Write a Program to Convert Binary Number to Decimal manually by 
creating user-defined functions.*/

#include<stdio.h>
int decimal();
int main()
{
    int n;
    printf("Enter Binary Number:");
    scanf("%d",&n);
    decimal(n);

    return 0;
}
int decimal(int n)
{
    int remainder, dec = 0, base = 1;
    for (int i = 1; i > 0; i++)
    {
        remainder = n % 10;
        dec = dec + remainder * base;
        n /= 10;
        base = base * 2;
    }
    printf("decimal Value:%d", dec);
}