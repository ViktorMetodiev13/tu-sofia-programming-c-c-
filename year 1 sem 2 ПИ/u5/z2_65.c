#include <stdio.h>

int main()
{
    float a[10];
    int n, counter = 0;

    printf("Enter value for n: ");
    scanf("%d", &n);

    printf("Elements:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &a[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (a[i] > n)
        {
            counter++;
        }
        printf("a[%d]: %0.2f\n", i, a[i]);
    }

    printf("counter = %d\n", counter);

    return 0;
}