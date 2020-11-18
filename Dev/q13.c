/*13. write a Program to generate the following Output.
    5
    4 5
    3 4 5
    2 3 4 5
    1 2 3 4 5
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,num;
    printf("Enter the number of Rows:- ");
    scanf("%d", &num);

    for(i=num;i>=1;i--)
    {
        for(j=i;j<=num;j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}