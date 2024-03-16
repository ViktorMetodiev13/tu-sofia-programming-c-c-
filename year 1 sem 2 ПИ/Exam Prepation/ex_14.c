#include <stdio.h>

int main()
{
    int A[10];

    int first_positive_num, index_first, last_positive_num, index_last;

    int sum_positive_numbers = 0;
    int sum_negative_numbers = 0;

    for (int i = 0; i < 10; i++)
    {
        do
        {
            printf("A[%d] = ", i);
            scanf("%d", &A[i]);
        } while (!(A[i] >= -999 && A[i] <= 999));
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        if (A[i] > 0)
        {
            first_positive_num = A[i];
            index_first = i;
            break;
        }
    }

    for (int i = 9; i > -1; i--)
    {
        if (A[i] > 0)
        {
            last_positive_num = A[i];
            index_last = i;
            break;
        }
    }

    for (int i = index_first + 1; i < index_last; i++)
    {
        if (A[i] > 0)
        {
            sum_positive_numbers += A[i];
        }
        else
        {
            sum_negative_numbers += A[i];
        }
    }

    printf("First positive number is: %d\n", first_positive_num);
    printf("Last positive number is: %d\n", last_positive_num);
    printf("Sum of positive numbers: %d\n", sum_positive_numbers);
    printf("Sum of negative numbers: %d\n", sum_negative_numbers);

    if (sum_positive_numbers % 2 == 0)
    {
        for (int i = 0; i < 10; i++)
        {
            if (A[i] > 0)
            {
                A[i] = 0;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}