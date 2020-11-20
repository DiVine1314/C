#include<stdio.h>

int main()
{
    int number;
    printf("Enter days : ");
    scanf("%d",&number);

    int years = 0;
    int weeks = 0;

    while (number >=365)
    {
        number = number -365;
        years++;
    }

    while (number >= 7)
    {
        number = number - 7;
        weeks++;
    }

    printf("Number of Years := %d\n", years);
    printf("Number of weeks := %d\n",weeks);
    printf("number of days := %d",number);

    return 0;


}