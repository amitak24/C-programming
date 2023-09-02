/*Write a Program to Find the Number of Vowels, Consonants, Digits and
White Spaces in a String*/

#include <stdio.h>
int main() 
{
    char str[100];
    int vowels=0,consonants=0,digits=0,spaces=0;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    for(int i=0;str[i]!='\0';i++) 
    {
        if (str[i]>='a' && str[i]<='z') 
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') 
            {
                vowels++;
            }
            else 
            {
                consonants++;
            }
        }
        else if(str[i]>='0'&&str[i]<='9') 
        {
            digits++;
        }
        else if(str[i]==' ') 
        {
            spaces++;
        }
    }
    
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    printf("Number of digits: %d\n", digits);
    printf("Number of white spaces: %d\n", spaces);
    
    return 0;
}