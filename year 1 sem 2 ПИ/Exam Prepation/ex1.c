#include <stdio.h>

int main()
{
    printf("da se sustavi programa za obrabotka na masiva A[10, 10], kudeto dannite sa chisla v intervala [-999.9 - 999.999].");

    float A[10][10];

    printf("Enter elements:\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            do
            {
                float current_num;
                printf("A[%d][%d] = ", i, j);
                scanf("%f", A[i][j]);
            } while (j > -999.9 && j < 999.999);
        }
        printf("\n");
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("A[%d][%d] = %f ", i, j, A[i][j]);
        }
        printf("\n");
    }

    return 0;
}