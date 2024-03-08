#include <stdio.h>

int main()
{
    float value, amOt;
    int counter = 0;

    printf("Enter number for value: ");
    scanf("%f", &value);
    printf("Enter value for amOt: ");
    scanf("%f", &amOt);



    while (value > 0)
    {
        value = value * (amOt / 100);
        counter++;
    }
    do
    {
        counter++;
        value = value * (amOt / 100);
    } while (value > 0);

    printf("Number of years before the asset becomes free of expenses: %d", counter);

    return 0;
}