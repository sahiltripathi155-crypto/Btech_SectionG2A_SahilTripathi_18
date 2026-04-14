
#include <stdio.h>
#include <math.h>

int main()
{
    float P, R, T;
    float SI, CI, Amount;

    // Input from user
    printf("Enter Principal amount: ");
    scanf("%f", &P);

    printf("Enter Rate of interest: ");
    scanf("%f", &R);

    printf("Enter Time (in years): ");
    scanf("%f", &T);

    // Simple Interest calculation
    SI = (P * R * T) / 100;

    // Compound Interest calculation
    Amount = P * pow((1 + R/100), T);
    CI = Amount - P;

    // Output
    printf("\nSimple Interest = %.2f", SI);
    printf("\nCompound Interest = %.2f", CI);

    return 0;
}