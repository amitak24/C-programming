//WAP to print Half Pyramid using number Pattern

#include<stdio.h>
int main()
{

    int row;
    printf("Enter the Row:");
    scanf("%d", &row);

    int i,j;
    for (i=1; i<=row;i++)
    {
        for (j =1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
    return 0;
}