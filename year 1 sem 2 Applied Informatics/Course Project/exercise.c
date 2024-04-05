#include <stdio.h>

int main()
{
    printf("Develop a program with a matrix A[6][5] which values should be float and are in range [0, 99.9].\n");
    printf("Action: The result should be a new array B with values from A[i][j] < 0 from columns.\n");
    printf("Produces by Viktor Metodiev - 361223016 - 21B group.\n");

    float A[6][5];
    int position = 0;

    printf("Elements:\n");
    for (int r = 0; r < 6; r++)
    {
        for (int c = 0; c < 5; c++)
        {
            do
            {
                printf("A[%d][%d] = ", r, c);
                scanf("%f", &A[r][c]);
            } while (!(A[r][c] >= 0 && A[r][c] <= 99.9));
        }
    }

    for (int r = 0; r < 6; r++)
    {
        for (int c = 0; c < 5; c++)
        {
            printf("%0.2f ", A[r][c]);
        }
        printf("\n");
    }

    float B[position];

    printf("Column sums:\n");
    for (int r = 0; r < 5; r++)
    {
        float sum = 0;
        for (int c = 0; c < 6; c++)
        {
            sum += A[c][r];
        }

        if (sum > 0) {
            B[position] = sum;
            position++;
        }

        printf("%0.2f\n", sum);
    }
    
    printf("Result:\n");
    for (int i = 0; i < position; i++)
    {
        printf("%0.2f ", B[i]);
    }

    return 0;
}