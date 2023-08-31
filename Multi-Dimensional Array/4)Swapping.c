/*Write a Program that takes three integers from the user and swaps them 
in cyclic order using pointers*/

#include<stdio.h>
int main() {
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    printf("Before swapping: a = %d, b = %d, c = %d\n", a, b, c);

    int temp = c;
    c = b;
    b = a;
    a = temp;
    
    printf("After swapping in cyclic order: a = %d, b = %d, c = %d\n", a, b, c);
    
    return 0;
}