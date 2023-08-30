/*Write a Program that takes the array of five element and the elements of 
that array are accessed using pointer.*/

#include<stdio.h>
int main()
{
    int Arr[5],i;
    printf("Enter All elements:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&Arr[i]);
    }
    printf("You Entered:\n");

    for(i=0;i<5;i++)
    {
        printf("%d\n",*(Arr+i));
    }
    return 0;
}