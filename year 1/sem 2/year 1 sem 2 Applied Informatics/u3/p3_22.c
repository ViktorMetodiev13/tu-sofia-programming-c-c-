#include <stdio.h>

int main()
{
    float fahrenheit, celsius;
    printf("Enter value in celius: ");
    scanf("%d", &celsius);

    fahrenheit = celsius*1.8 + 32;
    printf("Fahrenheit = %f\n", fahrenheit);
    
    return 0;
}