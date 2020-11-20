/*18. Write a C program to convert specified days into years, weeks and days.
    Note: Ignore leap year.

	Test Data :
	Number of days : 1329
	Expected Output :
	Years: 3
	Weeks: 33
	Days: 3
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int input_days;
    int year,week,day;

    printf("Enter the number of Days :- "); //User input number of Days
    scanf("%d",&input_days);

    year = input_days / 365;

    week = (input_days % 365) / 7;

    day = input_days - ((year * 365) + (week * 7));
    printf("Years : %d\nWeeks : %d\nDays : %d\n", year, week, day);
    return 0;

}