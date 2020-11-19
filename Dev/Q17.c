/*17. Write a C Program to Count the Occurrences of a Input number in 1D array.
        eg Input :-   1 83 9 2 1 83 1
                      1
            Output:- 3
        Explanation:-
            first line is an array of N numbers.
            seconr line is an Integer entered by the user.

            output is the count of the number in the array.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int array[20];
    int num;
    int count = 0;
    printf("Enter the size of an Array :- ");//Input Size of Element
    scanf("%d", &num);

    printf("Enter the elements of array :- ");
    for(int i = 0; i<num;i++)
    {
        scanf("%d", &array[i]);//Input Array element
    }

    int search;
    printf("Enter the number to search:- ");//Input element to search
    scanf("%d", &search);
    for(int i = 0; i < num; i++)
    {
        if(array[i] == search)
            count++;
    }
    printf("%d is %d times in the array.\n", search, count);
    return 0;
}