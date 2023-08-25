//Write a Program to Check Whether a Number is Prime or Not

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);

    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
        {
            printf("This is PRIME NUMBER");
        }
        else
        {
            printf("This is NOT a PRIME NUMBER");
        }

    return 0;
}