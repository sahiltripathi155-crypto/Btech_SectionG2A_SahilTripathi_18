#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("The year is a Leap Year");
    }
    else
    {
        printf("The year is not a Leap Year");
    }

    return 0;
}