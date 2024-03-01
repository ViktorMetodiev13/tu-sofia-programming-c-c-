#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x = 12;
    float y = 6;

    // purvi nachin
    float result1 = ((1 / (x * x + 1)) + (y * y / (y * y - 1)) + (5 / (x * x + y * y))) / (1 / (x * x - y * y));

    printf("variant 1:\n");
    printf("result1 = %f\n", result1);

    // vtori variant
    float part1 = (1 / (x * x + 1));
    float part2 = (y * y / (y * y - 1));
    float part3 = (5 / (x * x + y * y));
    float part4 = (1 / (x * x - y * y));

    float result2 = (part1 + part2 + part3) / part4;

    printf("variant 2:\n");
    printf("result2 = %f\n", result2);

    return 0;
}