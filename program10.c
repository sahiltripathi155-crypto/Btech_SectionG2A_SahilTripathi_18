#include <stdio.h>

int main()
{
    float m1, m2, m3, m4, m5, total, percentage;

    printf("Enter marks of 5 subjects: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    printf("Percentage = %.2f\n", percentage);

    if(percentage >= 90 && percentage <= 100)
        printf("Grade A");
    else if(percentage >= 80)
        printf("Grade B");
    else if(percentage >= 70)
        printf("Grade C");
    else
        printf("Grade D");

    return 0;
}