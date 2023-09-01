/*Write a Program to Find the Frequency of given Character by user in a 
String*/

#include <stdio.h>
int main() 
{
    char str[100];
    char ch;
    int frequency = 0;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ch) 
        {
            frequency++;
        }
    }
    printf("The frequency of '%c' in the string is %d\n", ch, frequency);
    
    return 0;
}