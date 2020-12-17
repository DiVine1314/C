#include<stdio.h>
int main ()
{
    int a,b;

    scanf("%d",&a);
    scanf("%d",&b);

    int sum = a + b;
    int diff = a - b;

    if (diff < 0)
    {
        diff = diff * -1;
    }
    

    if(a == 5 || b == 5)
    {
        printf("TRUE");
    }

    else if (sum == 5 || diff == 5)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    
    return 0;
}
