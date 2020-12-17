#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);


    if (a%3 == 0)
    {
        printf("It is multiple of 3");
    }

    else if (a%7 == 0)
    {
        printf("Its is multiple of 7");
    }
    
    else
    {
        printf("Its not the multiple of 3 or 7");
    }

    return 0;

    
}