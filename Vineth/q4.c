/* Upercase, lowercase, special char */

#include<stdio.h>
int main()
{
    char user_data;
    printf("Enter a Charechter of your choice :");
    scanf("%c",&user_data);
    if(user_data >= 'a' && user_data <= 'z')
    {
        printf("It is small case alphabate");
    }    
    else if(user_data >='A' && user_data <= 'Z')
    {
        printf("It is upercase Alphabate");
    }
    else
    {
        printf("It is a special Char");
    }
    
}