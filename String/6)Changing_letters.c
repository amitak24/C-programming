/*Write a C++ program to change every letter in a given string with the letter 
following it in the alphabet (ie. a becomes b, p becomes q, z becomes a)*/


#include <stdio.h>
#include <ctype.h>

void replaceWithNextLetter(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            if (str[i] == 'z') {
                str[i] = 'a';
            }
            else if (str[i] == 'Z') {
                str[i] = 'A';
            }
            else {
                str[i] = str[i] + 1;
            }
        }
    }
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    replaceWithNextLetter(str);
    
    printf("Result: %s\n", str);
    
    return 0;
}