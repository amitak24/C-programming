/*Write a Program that calculates the power of a number using recursion 
where base and exponent is entered by the user.*/

#include<stdio.h>
int result(int a,int b);
int main()
{
    int a,b;
    printf("Enter Base:");
    scanf("%d",&a);
    printf("Enter Power:");
    scanf("%d",&b);

    printf("The Answer is:%d",result(a,b));

    return 0;
}
int result(int a,int b)
{
       if (b==0)
    {
        return 1;
    }
    else
    {
        return a*result(a,b-1);
    }


}