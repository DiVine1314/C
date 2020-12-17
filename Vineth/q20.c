#include<stdio.h>
int main()
{
    int a, b, answer;
    

    scanf("%d",&a);
    scanf("%d",&b);

    if (a == b)
    {
        answer = (a+b)*3;

    }
    else
    {
        answer = a+b;
    
    }
    
    printf("%d",answer);

    return 0;
}