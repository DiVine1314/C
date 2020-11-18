/*14. Write a Program to calculate the sum of all ditits os given input number
    till it reduce to a single digit.
    eg. Input:- 489
        Output:- 3
    Explanation:- 
        4+8+9 = 21
        2+1 = 3
        therefore 3 is the output.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,rem,sum;
    printf("Enter a Number :- ");
    scanf("%d", &num);
    while (num / 10 != 0)
    {
        sum = 0;
        while (num != 0)
        {
            rem = num % 10;
            sum = sum + rem;
            num = num / 10;
        }

    }
    printf("%d\n", sum);
    return 0;
}