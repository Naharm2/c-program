#include<stdio.h>
int main()
{
    int total_days, years, week,days;

    printf("Enter number of days: ");
    scanf("%d", &total_days);
    years = total_days / 365;
    week = (total_days % 365) / 7;
    days = (total_days % 365) % 7;
   printf("Years: %d\n", years);
   printf("Weeks: %d\n", week);
   printf("Days: %d\n", days);
    return 0;
}