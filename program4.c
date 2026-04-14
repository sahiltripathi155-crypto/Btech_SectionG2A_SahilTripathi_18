#include <stdio.h>

int main()
{
    float C, F;

    printf("Enter temperature in Centigrade: ");
    scanf("%f", &C);

    F = (9 * C / 5) + 32;

    printf("Temperature in Fahrenheit = %.2f", F);

    return 0;
}