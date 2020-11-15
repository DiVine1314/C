#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,num;
    int n[30];

    printf("Enter number of Elements :- ");
    scanf("%d", &num);
    for(i=0;i<num;i++)
    {
        printf("Enter the %d Element : ", i+1);
        scanf("%d", &n[i]);
    }
    printf("----------------------------------\n");
    printf("Entered Elements.\n");
    for(i=0;i<num;i++)
    {
        printf("%d\n", n[i]);
    }
    return 0;
}