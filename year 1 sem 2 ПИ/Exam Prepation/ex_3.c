#include <stdio.h>

int main() 
{
    printf("uslovie\n");

    int M, N, Q;

    printf("Enter value for M: ");
    scanf("%d", &M);
    printf("Enter value for N: ");
    scanf("%d", &N);
    printf("Enter value for Q: ");
    scanf("%d", &Q);

    float A[2][3], B[2][3];

    int counter = 0;

    printf("Elements:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            do
            {
                printf("A[%d][%d] = ", i, j);
                scanf("%f", &A[i][j]);
            } while (!(A[i][j] >= -999.99 && A[i][j] <= 999.999));
        }
    }


    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%f ", A[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(A[i][j] >= N && A[i][j] <= M)
            {
                B[i][j] = Q;
                counter++;
            }
            else 
            {
                B[i][j] = A[i][j];
            }
        }
    }
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%f ", B[i][j]);
        }
        printf("\n");
    }
    
    printf("Changed numbers count: %d", counter);

    return 0;
}