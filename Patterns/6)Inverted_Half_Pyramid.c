//WAP to print Inverted Full Pyramid Stars Pattern

#include <stdio.h>
int main()
{

    int n,i,j,k;
    printf("Enter The Rows:");
    scanf("%d", &n);
    for (i=n;i>=1;i--)
    {
        for (j=i;j<n;j++)
        {
           printf(" ");
        }
        for(k=i;k>=1;k--)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}