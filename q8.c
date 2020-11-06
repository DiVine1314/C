/* Area of Circle */

#include<stdio.h>
int main ()
{
    float radius;
    float pie = 3.14;
    float answer;

    printf("Enter the radius of the circle : ");
    scanf("%f",&radius);

    answer = pie * radius * radius;

    printf("the area of circle is %.2f", answer);
    return 0;
}
/* aur kaam karna hai........ */