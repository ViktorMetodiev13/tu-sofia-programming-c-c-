#include <stdio.h>

int main()
{
    int a[20], sum = 0, counter = 0;

    printf("Elements:\n");
    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 20; i++)
    {
        if (a[i] > 0)
        {
            sum += a[i];
            counter++;
        }
    }

    printf("Sum = %d\n", sum);
    printf("Counter = %d\n", counter);

    return 0;
}