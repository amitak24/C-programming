/*Write a Program that takes N elements (max. value of N is 100 and N is the 
float number specified by user) from user, stores data in an array and 
calculates the average of those numbers.*/

#include<stdio.h>
int main()
{
    float arr[100],sum=0;
    int n;
    printf("Enter no. of Elements :");
    scanf("%d",&n);
    printf("Enter All %d elements:\n",n);

    int i;
    for(i=1;i<=n;i++)
    {
        scanf("%f",&arr[i]);
        sum=sum+arr[i];
    }
    float result=sum/n;

    printf("The Average is:%f",result);

    return 0;
}