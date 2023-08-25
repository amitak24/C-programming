//Write a Program to Reverse a given Number N by user

#include<stdio.h>
int main()
{
     int n;
     printf("Enter Any Number:");
     scanf("%d",&n);

    int remainder,reverse=0;
      while(n!=0)
    {
        remainder=n%10;
        reverse=(reverse*10)+remainder;
        n/=10;
    }
    printf("Reverse of Number:%d",reverse);
    
    return 0;
}