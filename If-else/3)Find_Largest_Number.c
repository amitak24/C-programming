/*) Write a Program to Find Largest Number Among Three
Numbers entered by users*/

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Three Numbers:");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b&&a>c)
    {
        printf("The Largest Number is '%d'",a);
    }
    else if(b>a&&b>c)
    {
        printf("The Largest Number is '%d'",b);
    }
    else
    {
        printf("The Largest Number is '%d'",c);
    }

    return 0;
}