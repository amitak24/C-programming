/*Write a Program to Convert Decimal to Binary number manually by 
creating user-defined functions.*/

#include<stdio.h>
int binary();
int main()
{
    int n;
    printf("Enter decimal Number:");

    scanf("%d",&n);
    binary(n);

    return 0;
}
int binary(int n)
{
    int remiander,bi=0,base=1;
    for (int i=1;i>0;i++)
    {
        remiander=n%2;
        bi=bi+remiander*base;
        n/=2;
        base=base*10;
    }
    printf("Binary Number:%d", bi);
}
