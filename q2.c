/* Aphabet or not*/
#include<stdio.h>
int main()
{
    char user_input;
    printf("Enter a charechter :");
    scanf("%c",&user_input);
    if(user_input>='a' && user_input<='z' || user_input>='A' && user_input<='Z')
    {
        printf("It is a aplhabate");
    }
    else
    {
      printf("It is not an Alphabate");
    }
    return 0;

}