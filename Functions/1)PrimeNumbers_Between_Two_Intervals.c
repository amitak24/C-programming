/*Write a Program to Display Prime Numbers Between Two Intervals 
(entered by the user) Using Functions*/

#include<stdio.h>
int primenum();

int main()
{
    int n1,n2;
    printf("Enter Start number:");
    scanf("%d",&n1);
    printf("Enter End number:");
    scanf("%d",&n2);

    primenum( n1, n2);

    return 0;
}

int primenum(int n1,int n2)
{
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

}