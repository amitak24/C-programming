//WAP to print Full Pyramid Stars Pattern

#include <stdio.h>
int main()
{

    int n,i,j,k;
    printf("Enter The Rows:");
    scanf("%d", &n);
    for (i=1;i<=n;i++)
    {
        for (j=n;j>i;j--)
        {
           printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}