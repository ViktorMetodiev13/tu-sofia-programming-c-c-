#include <stdio.h>

int main()
{
    printf("uslovie\n");

    int M;
    printf("Enter value for M: ");
    scanf("%d", &M);

    int A[M][M];

    printf("Elements:\n");
    for (int r = 0; r < M; r++)
    {
        for (int c = 0; c < M; c++)
        {
            do
            {
                printf("A[%d][%d] = ", r, c);
                scanf("%d", &A[r][c]);
            } while (!(A[r][c] >= -9999 && A[r][c] <= 9999));
        }
    }

    for (int r = 0; r < M; r++)
    {
        for (int c = 0; c < M; c++)
        {
            printf("%d ", A[c][r]);
        }
        printf("\n");
    }

    for (int r = 0; r < M; r++)
    {
        int max = -9999;
        int min = 9999;
        for (int c = 0; c < M; c++)
        {

            if (max < A[r][c])
            {
                max = A[r][c];
            }

            if (min > A[r][c])
            {
                min = A[r][c];
            }
        }
        printf("Max value for row %d is: %d\n", r, max);
        printf("Min value for row %d is: %d\n", r, min);
    }

    return 0;
}