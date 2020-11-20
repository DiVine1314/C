#include<stdio.h>

int main()
{
    int array[100];
    int size_array;

    printf("How many values do you want to store : ");
    scanf("%d",&size_array);
    printf("Start entering your values :");

    for (int i = 0; i < size_array; i++)
    {
        scanf("%d",&array[i]);
    }

    int num;
    printf("which number do you want to find :");
    scanf("%d",&num);

    int count;
    int j = 0;

   for ( j = 0; j < size_array; j++)
   {
       if (array[j] == num)
       {
           count++;
       }
       
   }
   

    printf("%d Results found",count);

    return 0;
    
}