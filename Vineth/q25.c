#include<stdio.h>
int main()
{
    int a,b;

    scanf("%d",&a);
    scanf("%d",&b);

    if (a <= 20 && a > 10 || b <= 20 && b > 10 )
    {
        printf("18");
    }
    
    else
    {
        int ans = a + b;
        printf("%d",ans);
    }
    
    return 0;
}