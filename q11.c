#include<stdio.h>
int main()
{
    int num;
    int reminder;

    printf("Enter a number : ");
    scanf("%d",&num);

    printf("Reversed manner : ");
    while (num != 0)
    {
        reminder = num%10;
        printf("%d", reminder);
        num = num/10;
    }
    

    return 0;
}