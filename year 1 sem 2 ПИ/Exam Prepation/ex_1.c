#include <stdio.h>

int main()
{
    printf("da se sustavi programa za obrabotka na masiva A[10, 10], kudeto dannite sa chisla v intervala [-999.9 - 999.999].\n");
    printf("tri imena.\n");

    float A[3][3];
    int row_size = sizeof(A)[0] / sizeof(float);
    int column_size = sizeof(A) / (row_size * sizeof(float));

    float B[row_size * column_size], temp;
    int position = 0;

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

    printf("\n");

    for (int i = 0; i < row_size; i++)
    {
        for (int j = 0; j < column_size; j++)
        {
            if (A[i][j] > 0)
            {
                B[position] = A[i][j];
                position++;
            }
        }
    }

    for (int i = 0; i < position; i++)
    {
        for (int j = 0; j < position; j++)
        {
            if(B[i] > B[j])
            {
                temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }

    printf("Sorted matrix:\n");
    for (int i = 0; i < position; i++)
    {
        printf("%.2f ", B[i]);
    }
    

    return 0;
}