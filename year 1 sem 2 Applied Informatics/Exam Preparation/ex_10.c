#include <stdio.h>

int main()
{
    printf("uslovie - ime.\n");

    int M[4][4];

    printf("Enter elements:\n");
    for (int r = 0; r < 4; r++)
    {
        for (int c = 0; c < 4; c++)
        {
            printf("M[%d][%d] = ", r, c);
            scanf("%d", &M[r][c]);
            while (!(M[r][c] >= -999 && M[r][c] <= 999))
            {
                printf("M[%d][%d] = ", r, c);
                scanf("%d", &M[r][c]);
            }
        }
    }

    printf("\nInitial matrix:\n");
    for (int r = 0; r < 4; r++)
    {
        for (int c = 0; c < 4; c++)
        {
            printf("%d ", M[r][c]);
        }
        printf("\n");
    }
}