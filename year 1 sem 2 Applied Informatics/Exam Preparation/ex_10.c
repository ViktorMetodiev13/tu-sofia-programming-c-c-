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
            do
            {
                printf("M[%d][%d] = ", r, c);
                scanf("%d", &M[r][c]);
            } while (!(M[r][c] >= -999 && M[r][c] <= 999));
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

    for (int r = 0; r < 4; r++)
    {
        for (int c = 0; c < 4; c++)
        {
            if ((r + c) % 2 == 0)
            {
                M[r][c] = 0;
            }
        }
    }

    printf("Matrix after Nollified elements:\n");
    for (int r = 0; r < 4; r++)
    {
        for (int c = 0; c < 4; c++)
        {
            printf("%d ", M[r][c]);
        }
        printf("\n");
    }

    for (int r = 0; r < 4; r++)
    {
        int writeIndex = 0;

        for (int c = 0; c < 4; c++)
        {
            if (M[r][c] != 0)
            {
                M[r][writeIndex++] = M[r][c];
            }
        }

        for (int c = writeIndex; c < 4; c++)
        {
            M[r][c] = 0;
        }
    }

    printf("\nChanged matrix.\n");
    for (int r = 0; r < 4; r++)
    {
        for (int c = 0; c < 4; c++)
        {
            printf("%d ", M[r][c]);
        }
        printf("\n");
    }

    return 0;
}