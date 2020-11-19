#include<stdio.h>

int main()
{
    int num_array[100];
    int n;
    int sum;

    printf("How many values you want to add : ");
    scanf("%d",&n);

    printf("Start entering value :\n ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num_array[i]);
    }

    printf("You entered : \n");

    for (int p = 0; p < n; p++)
    {
        printf("%d \t",num_array[p]);
    }
    
    int answer = 0;

    for (int j = 0; j < n; j++)
    {
        answer += num_array[j]; 
    }

    printf("\nSum of array is %d",answer);
    
    return 0;
    
}