//Write a Program to Remove all Characters in a String Except Alphabets

#include <stdio.h>
#include <ctype.h>

void removeNonAlphabets(char* str)
{
    int i, j;
    
    for(i=j=0;str[i]!='\0';i++) 
    {
        if(isalpha(str[i])) 
        {
            str[j++]=str[i];
        }
        if(str[i+1]=='\0') 
        {
            str[j] = '\0';
        }
    }
}

int main() 
{
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    removeNonAlphabets(str);
    
    printf("Result: %s\n", str);
    
    return 0;
}