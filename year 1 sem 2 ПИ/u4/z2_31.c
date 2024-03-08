#include <stdio.h>
#include <math.h>

int main()
{
    float r;
    printf("Enter value for the radius: ");
    scanf("%f", &r);
    // printf("radius = %f", )

    float area_triangle = 3 * r * r * sqrt(3);
    float area_cirlce = 3.14159 * r * r;

    float result = area_triangle - area_cirlce;

    printf("Result = %f\n", result);

    return 0;
}