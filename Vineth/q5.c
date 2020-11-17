/* Number is positive or not */

#include<stdio.h>

int main()
{
    int user_num;
    printf("Enter a Value : ");
    scanf("%d",&user_num);
    if(user_num > 0)
    {
        printf("Its  a positive muber");
    }
    else if(user_num == 0)
    {
        printf("It is a neutral");
    }
    else
    {
        printf("Its a Negative Number");
    }
    
    return 0;
}