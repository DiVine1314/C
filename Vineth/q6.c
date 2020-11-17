/* Even or Odd */

#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    if (number%2 == 0)
    {
        printf("It is even");
    }
    else
    {
        printf("It is odd");
    }
    
    return 0;
}