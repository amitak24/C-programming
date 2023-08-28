//WAP to print Hollow Rectangular Stars Pattern

#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=3;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(i==1 || i==3 || j==1 || j==9)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }


    return 0;
}