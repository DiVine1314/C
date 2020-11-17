/* Swap Number without 3rd variable */

#include<stdio.h>
int main()
{
    int n1, n2;
    printf("Enter the first value : ");
    scanf("%d",&n1);
    printf("Enter the second value : ");
    scanf("%d", &n2);
    n1 = n1+n2;
    n2 = n1-n2;
    n1 = n1 - n2 ;
    printf("N1 = %d \n", n1);
    printf("N2 = %d", n2);
    return 0;
}