#include<stdio.h>

int main()
{
    int km;
    float l;
    float average;

    printf("Enter Distance covered in Km := ");
    scanf("%d",&km);

    printf("Enter Fuel used in Liters := ");
    scanf("%2f",&l);

    average = km/l;

    printf("Average of your vehical is %.2f",average);

    return 0;

}