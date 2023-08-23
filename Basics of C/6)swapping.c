/* Write a Program to Swap Two Numbers*/

#include<stdio.h>
int main()
{
     int a,b;
     printf("--VALUES BEFORE SWAPPING--\n");
     printf("enter value for a:");
     scanf("%d",&a);
     printf("enter value for b:");
     scanf("%d",&b);

     int swap;
     swap=a;
     a=b;
     b=swap;

     printf("--VALUES AFTER SWAPPING\n");
     printf("the value of a is:%d\n",a);
     printf("the value of b is:%d\n",b);

    return 0;
}