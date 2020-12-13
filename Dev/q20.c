#include<stdio.h>
#include<stdlib.h>

int advAdd(int num1, int num2);

int main()
{
    int num1,num2;
    printf("Enter two numbers :- ");
    scanf("%d %d", &num1, &num2);
    printf("%d\n", advAdd(num1, num2));
    return 0;
}

int advAdd(int num1, int num2)
{
    return num1 == num2 ? (num1 + num2)*3 : num1 + num2;
}