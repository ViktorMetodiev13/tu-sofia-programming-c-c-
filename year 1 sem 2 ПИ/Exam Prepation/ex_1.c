#include <stdio.h>

int main()
{
    printf("da se sustavi programa za obrabotka na masiva A[10, 10], kudeto dannite sa chisla v intervala [-999.9 - 999.999].\n");

    float A[3][3], B[3][3];

    printf("Enter elements:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            do
            {
                printf("A[%d][%d] = ", i, j);
                scanf("%f", &A[i][j]);
            } while (!(A[i][j] >= -999.9 && A[i][j] <= 999.999));
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%0.2f ", A[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (A[i][j] > 0)
            {
                B[i][j] = A[i][j];
            }
            // Optimise it
            else
            {
                B[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%0.2f ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}