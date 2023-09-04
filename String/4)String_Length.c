//Write a Program to Find the Length of a String entered by user

#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Removing the trailing newline character
    str[strcspn(str,"\n")]='\0';
    
    int length = strlen(str);
    
    printf("The length of the string is: %d\n", length);
    
    return 0;
}