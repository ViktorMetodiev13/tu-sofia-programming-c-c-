#include <stdio.h>

int main()
{
    int A[20];

    int min = 99;
    int max = -99;
    int sum = 0;

    for (int i = 0; i < 20; i++)
    {
        do
        {
            printf("A[%d] = ", i);
            scanf("%d", &A[i]);
        } while (!(A[i] >= -99 && A[i] <= 99));
    }

    for (int i = 0; i < 20; i++)
    {
        printf("%d ", A[i]);
    }

    for (int i = 0; i < 20; i++)
    {
        if (min > A[i])
        {
            min = A[i];
        }
        if (max < A[i])
        {
            max = A[i];
        }
        sum += A[i];
    }

    printf("\n");

    printf("Sum = %d\n", sum);
    printf("Max = %d\n", max);
    printf("Min = %d\n", min);

    return 0;
}