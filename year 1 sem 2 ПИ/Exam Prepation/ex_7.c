#include <stdio.h>

int main()
{
    printf("uslovie - ime.\n");

    int M, N;
    printf("Enter value for M: ");
    scanf("%d", &M);
    printf("Enter value for N: ");
    scanf("%d", &N);

    int A[3][3];

    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            do
            {
                printf("A[%d][%d] = ", r, c);
                scanf("%d", &A[r][c]);
            } while (!(A[r][c] >= -500 && A[r][c] <= 500));
        }
    }

    printf("\n");

    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("%d ", A[r][c]);
        }
        printf("\n");
    }

    printf("\n");

    int min = 500;
    int max = -500;

    int r_max, r_min;

    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            if (min > A[r][c])
            {
                min = A[r][c];
                r_min = r;
            }

            if (max < A[r][c])
            {
                max = A[r][c];
                r_max = r;
            }
        }
    }

    return 0;
}