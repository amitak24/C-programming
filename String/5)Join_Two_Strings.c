/* Write a Program to Concatenate (join) Two Strings entered by user*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    // Removing the trailing newline characters
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    
    char result[200];
    
    strcpy(result, str1);
    strcat(result, str2); 
    
    printf("Concatenated string: %s\n", result);
    
    return 0;
}