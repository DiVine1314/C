/* Vowel or not */

#include<stdio.h>
char main()
{
    char input_usr;
    printf("Enter a Charechter : ");
    scanf("%c", &input_usr);
    if (input_usr == 'a'|| input_usr == 'e' || input_usr == 'i' || input_usr == 'o' || input_usr == 'u' || input_usr == 'A'|| input_usr == 'E' || input_usr == 'I' || input_usr == 'O' || input_usr == 'U')
    {
        printf("It is a vowel");
    }
    else
    {
        printf("It is not a vowel");
    }
    return 0;
    
}