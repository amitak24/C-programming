/*Write a Program to Display Prime Numbers Between Two Intervals
(entered by user)*/

#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter first number:");
    scanf("%d",&n1);
    printf("Enter second number:");
    scanf("%d",&n2);

    int i,j;
   for(j=n1;j<=n2;j++)
   {
        for(i=2;i<j;i++)
        {

            if(j%i==0)
                break;
        }
            if(i==j)
            printf("%d ",j);
    }

    return 0;
}