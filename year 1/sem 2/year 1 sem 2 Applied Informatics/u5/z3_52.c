#include <stdio.h>

int main()
{
    float Suma, Lih;
    int year_counter = 0;

    printf("Initial money = ");
    scanf("%f", &Suma);
    printf("Interest rate = ");
    scanf("%f", &Lih);

    Lih /= 100;

    while (Suma < 1000000)
    {
        Suma = Suma + (Suma * Lih);
        year_counter++;
        printf("Suma = %0.2f\n", Suma);
    }

    printf("It will take %d years for the initial money to reach 1 000 000.", year_counter);

    return 0;
}