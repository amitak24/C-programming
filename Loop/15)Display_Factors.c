/*Write a Program to Display all Factors of a Number entered by User*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);

    int i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
        printf("%d ",i);
        }
    }

    return 0;
}