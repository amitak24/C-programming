/*Write a Program that adds two matrices using Multi dimensional Arrays 
where the number of rows r and columns c is entered by user (Value of r and 
c < 100)*/

#include<stdio.h>
int main()
{
    int r, c;
    
    printf("Enter the number of rows (r): ");
    scanf("%d", &r);
    printf("Enter the number of columns (c): ");
    scanf("%d", &c);
    
    int matrix1[r][c], matrix2[r][c], sumMatrix[r][c];
    int i,j;
    
    printf("Enter elements of matrix1:\n");
    for(i=0;i<r;i++) 
    {
        for(j=0;j<c;j++) 
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("Enter elements of matrix2:\n");
    for (i=0;i<r;i++) 
    {
        for (j=0;j<c;j++) 
        {
            scanf("%d",&matrix2[i][j]);
        }
    }
    
    for(i=0;i<r;i++) 
    {
        for (j=0;j<c;j++) 
        {
            sumMatrix[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
    
    printf("Sum of matrices:\n");
    for(i=0;i<r;i++) 
    {
        for(j=0;j<c;j++) 
        {
            printf("%d ",sumMatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}