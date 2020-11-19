/*16. Write a C Program to Find and Print Max AND Min of an 1D array.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int array[20];
    int num,max,min;
    printf("Enter the Size of array:- ");  //Will accecpet the size of an array
    scanf("%d", &num);
    printf("Enter the elements of array :- "); //Will accecpet the the elements of an array

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &array[i]); //Store the values in the array
    }

    //Assuming first element of an array is max or min
    max = array[0];
    min = array[0];

    for (int i = 0; i < num; i++)
    {
        //if current element is greater than max
        if(array[i] > max)
            max = array[i];
        else
            min = array[i];
        
    }
    printf("Maximum = %d\nMinimum = %d\n", max,min);
    return 0;
    
}