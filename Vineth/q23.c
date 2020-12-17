#include<stdio.h>
int main()
{
    int a,b;

    scanf("%d",&a);
    scanf("%d",&b);

    int new_a = a % 10;
    int new_b = b % 10;

    if(a > 0 && b > 0)
    {
    if (new_a == new_b)
    {
        printf("Both are having same last digit");
    }
    else
    {
        printf("Their last digit are not same");
    }
    }
    else
    {
        printf("Please enter Positive numbers only");
    }
    
    

    return 0;
}