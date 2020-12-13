#include<stdio.h>

int main()
{
    int num;
    printf("Enter a Number :- ");
    scanf("%d", &num);
    if(num % 3 == 0 || num % 7 == 0)
    {
        printf("%d\n",1);
    }
    else
    {
        printf("%d\n", 0);
    }
    return 0;
} 