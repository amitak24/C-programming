/*Write a Program to Check Whether a Character is
Vowel or Consonant.*/

#include<stdio.h>
int main()
{
    char ch;
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("'%c' is a vowel\n", ch);
    }
    else if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("'%c' is a vowel\n", ch);
    }
    else 
    {
        printf("'%c' is a consonant\n", ch);
    }

    return 0;
}