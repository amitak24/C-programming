/*Write a Program takes two matrices of order r1*c1 and r2*c2 respectively. 
Then, the program multiplies these two matrices (if possible) and displays it 
on the screen.*/

#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    
    printf("Enter the number of rows and columns for the first matrix (r1 c1): ");
    scanf("%d %d", &r1, &c1);
    
    printf("Enter the number of rows and columns for the second matrix (r2 c2): ");
    scanf("%d %d", &r2, &c2);
    
    if (c1!=r2) 
    {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }
    
    int matrix1[r1][c1], matrix2[r2][c2], productMatrix[r1][c2];
    int i, j, k;
    
    printf("Enter elements of the first matrix:\n");
    for(i=0;i<r1;i++) 
    {
        for(j=0;j<c1;j++) 
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
    
    printf("Enter elements of the second matrix:\n");
    for(i=0;i<r2;i++) 
    {
        for(j=0;j<c2;j++) 
        {
            scanf("%d",&matrix2[i][j]);
        }
    }
  
    for(i=0;i<r1;i++) 
    {
        for(j=0;j<c2;j++) 
        {
            productMatrix[i][j]=0;
            for(k=0;k<c1;k++) 
            {
                productMatrix[i][j] += matrix1[i][k]*matrix2[k][j];
            }
        }
    }
    printf("Product of matrices:\n");
    for(i=0;i<r1;i++) 
    {
        for(j=0;j<c2;j++) 
        {
            printf("%d ",productMatrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}