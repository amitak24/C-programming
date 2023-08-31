/*Write a Program that takes a matrix of order r*c from the user and 
computes the transpose of the matrix.*/

#include <stdio.h>

int main() {
    int r, c, i, j;
    
    printf("Enter the number of rows (r): ");
    scanf("%d",&r);
    
    printf("Enter the number of columns (c): ");
    scanf("%d",&c);
    
    int matrix[r][c], transpose[c][r];
    
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<r;i++) 
    {
        for(j=0;j<c;j++) 
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    
    for(i=0;i<c;i++) 
    {
        for(j=0;j<r;j++) 
        {
            transpose[i][j] = matrix[j][i];
        }
    }
    
    printf("Matrix Transpose:\n");
    for(i=0;i<c;i++) 
    {
        for(j=0;j<r;j++) 
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}