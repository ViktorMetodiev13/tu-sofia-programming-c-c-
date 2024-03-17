#include <stdio.h>

int main()
{
    printf("uslovie - ime.\n");

    int M;
    int A, B;

    printf("Enter value for A: ");
    scanf("%d", &A);
    printf("Enter valur for B: ");
    scanf("%d", &B);

    printf("Enter value for M: ");
    scanf("%d", &M);

    float D[M][M];

    for (int r = 0; r < M; r++)
    {
        for (int c = 0; c < M; c++)
        {
            do
            {
                printf("D[%d][%d] = ", r, c);
                scanf("%f", &D[r][c]);
            } while (!(D[r][c] >= -999.9 && D[r][c] <= 999.99));
        }
    }

    for (int r = 0; r < M; r++)
    {
        for (int c = 0; c < M; c++)
        {
            printf("%f ", D[r][c]);
        }
        printf("\n");
    }

    printf("\n");

    for (int r = 0; r < M; r++)
    {
        for (int c = 0; c < M; c++)
        {
            if (D[r][c] < A || D[r][c] > B)
            {
                D[r][c] *= 2;
            }
        }
    }

    float temp;

    for (int r = 0; r < M; r++)
    {
        for (int c = 0; c < r; c++)
        {
            temp = D[r][c];
            D[r][c] = D[c][r];
            D[c][r] = temp;
        }
    }
    
    for (int r = 0; r < M; r++)
    {
        for (int c = 0; c < M; c++)
        {
            printf("%f ", D[r][c]);
        }
        printf("\n");
    }
    

    return 0;
}