/*15. Write a C Program to Display the SUM of all elements of an 1D array.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int array[20];
    int num;
    printf("Enter the Length of Array: -");
    scanf("%d", &num);
    printf("Enter the Elements of Array:- ");
    for(int i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    int sum = 0;
    for(int i = 0; i < num; i++)
    {
        sum = sum + array[i];
    }

    printf("Sum of array is %d.\n", sum);
    return 0;
}