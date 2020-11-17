#include<stdio.h>

int main()
{
    int numbers;
    int store_answer;
    int even = 0;
    int odd = 0;
    int zero = 0;

    printf("Enter a Number: ");
    scanf("%d",&numbers);
    
    while(numbers>0){
    store_answer = numbers % 10;
    numbers= numbers/10;

   if (store_answer != 0 && store_answer%2 == 0)
    {
        even++;
    }
    else if (store_answer == 0 )
    {
       zero++;
    }
    else
    {
        odd++;
    }
    }
    
    
    printf("Even = %d\n",even);
    printf("Odd = %d\n",odd);
    printf("zero = %d",zero);
    return 0;

}