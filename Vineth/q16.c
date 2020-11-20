#include<stdio.h>

int main()
{
    int num[100];
    int size_array;

    printf("How many valuse do you want to store :  ");
    scanf("%d",&size_array);

    for (int i = 0; i < size_array; i++)
    {
        scanf("%d",&num[i]);
    }

    int min = num[0];
    int max = num[0];

    for ( int j = 0; j < size_array; j++)
    {
        if (num[j] < min)
        {
            min = num[j];
        }
        else if (num[j] > max)
        {
            max = num[j];
        }
        
    }

    printf("Minimum number = %d",min);
    printf("\nMaxium number =%d",max);
    

    return 0;
    
}