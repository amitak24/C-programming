//Write a Program to Add Two Integer Numbers Entered by User

#include<stdio.h>
int main()
{
    int a,b;
    printf("ENTER VALUE FOR a:");
    scanf("%d",&a);
    printf("ENTER VALUE FOR b:");
    scanf("%d",&b);

    int c;
    c=a+b;
    printf("THE SUM OF a&b=%d",c);
    
     return 0;
}