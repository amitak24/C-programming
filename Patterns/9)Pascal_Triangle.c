//WAP to print Pascal Triangle

#include <stdio.h>

int main()
{
    int i, j, row, k, value;
    printf("Enter The Row:\n");
    scanf("%d", &row);
    for (i = 0; i <= row; i++)
    {
        for (j = 0; j <= row - i; j++)
        {
            printf("  ");
        }
        value = 1;
        for (k = 0; k <= i; k++)
        {
            printf("%4d", value);
            value = (value * (i - k) / (k + 1));
        }
        printf("\n");
    }
    return 0;
}