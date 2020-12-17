#include<stdio.h>
int main()
{
    int a,b;

    scanf("%d",&a);
    scanf("%d",&b);

    int diff_a = 0;
    int diff_b = 0;

    diff_a =  100 - a;
    diff_b =  100 - b;

    if(diff_a < 0)
    {
    diff_a = diff_a * -1;    
    }

    if(diff_b < 0)
    {
    diff_b = diff_b * -1;    
    }


    if (diff_a < diff_b)
    {
        printf("%d is closest to 100",a);
    }
    else if (diff_a == diff_b)
    {
        printf("both are equaly near");
    }
    else
    {
        printf("%d is closest to 100",b);
    }
    
    return 0;
    
}