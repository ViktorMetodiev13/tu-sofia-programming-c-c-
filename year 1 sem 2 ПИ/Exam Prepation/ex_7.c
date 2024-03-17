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

    int max_count = 0;
    int min_count = 0;

    printf("Enter elements:\n");
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

    printf("\nInitial matrix:\n");
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

    int r_max, c_max, r_min, c_min, temp;

    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            if (min > A[r][c])
            {
                min = A[r][c];
                r_min = r;
                c_min = c;
            }

            if (min < N)
            {
                min_count++;
            }

            if (max < A[r][c])
            {
                max = A[r][c];
                r_max = r;
                c_max = c;
            }

            if (max > M)
            {
                max_count++;
            }

            temp = A[r_max][c];
            A[r_max][c] = A[r_max][c];
            A[r_max][c] = temp;
        }
    }

    printf("Changed matrix:\n");
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("%d ", A[r][c]);
        }
        printf("\n");
    }

    printf("\nThe count of numbers higher than M is %d\n", max_count);
    printf("The count of numbers lower than N is %d", min_count);

    return 0;
}