/*Write a Program to check if an integer (entered by the user) can be 
expressed as the sum of two prime numbers, if yes then print all possible 
combinations with the use of functions.*/

#include<stdio.h>
int nextprime();
int isprime();
int main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);

    int i;
    for(i=2;i<=n-i;i=nextprime(i))
    {
        if(isprime(n-i))
        {
            printf("%d+%d=%d\n",i,n-i,n);
        }
    }
    return 0;
}

int nextprime(int n)
{
    do n++;
    while(!isprime(n));
    {
        return n;
    }
}

int isprime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}