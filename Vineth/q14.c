#include<stdio.h>

int main()
{
    int numbers;
    printf("Enter Number :");
    scanf("%d",&numbers);

     int answer;
     int temp = 0;
    
    while  (numbers / 10 != 0)
    {
        while(numbers!= 0)
        {
            answer = 0;
            temp=numbers%10;
            answer += temp;   
            numbers = numbers/10;
        }
        numbers = answer;       
    }
     printf("%d",answer);
     return 0;
}