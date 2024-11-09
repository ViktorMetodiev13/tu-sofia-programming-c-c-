#include <stdio.h>
#include <stdlib.h>

int main()
{
    float velocity_mph, MILES_INTO_KILOMETERS, velocity_kmph;

    MILES_INTO_KILOMETERS = 1.60934;

    printf("vuvdete stoinost za mili v chas: ");
    scanf("%f", &velocity_mph);

    velocity_kmph = velocity_mph * MILES_INTO_KILOMETERS;
    printf("kilometra v chas: %f\n", velocity_kmph);

    return 0;
}