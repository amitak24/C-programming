/*Write a Program to Calculate Sum of first N Natural Numbers (here value
of N is Entered by user)*/

#include<stdio.h>
int main()
{
    int a,sum=0;

    printf("Enter value for n:");
    scanf("%d",&a);

    int i;      
    for(i=0;i<=a;i++)
    {
      sum=sum+i;
    }
    printf("The Sum is %d",sum);

    return 0;
}