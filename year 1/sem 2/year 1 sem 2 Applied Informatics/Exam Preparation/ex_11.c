#include <stdio.h>

int main()
{
    printf("uslovi - ime.\n");

    int M, N, Del;
    printf("Enter value for M: ");
    scanf("%d", &M);
    printf("Enter value for N: ");
    scanf("%d", &N);
    printf("Enter value for Del: ");
    scanf("%d", &Del);

    int A[3];

    for (int i = 0; i < 60; i++)
    {
        do
        {
            printf("A[%d] = ", i);
            scanf("%d", &A[i]);
        } while (!(A[i] >= 0 && A[i] <= 99));
    }
    
    for (int i = 0; i < 60; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\n");

    printf("M = %d\n", M);
    printf("N = %d\n", N);
    printf("Del = %d\n", Del);

    for (int i = 0; i < 60; i++)
    {
        if ((A[i] >= M && A[i] <= N) && A[i] % Del == 0)
        {
            A[i] = 0;
            printf("%d\n", i);
        }
    }

    for (int i = 0; i < 60; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}