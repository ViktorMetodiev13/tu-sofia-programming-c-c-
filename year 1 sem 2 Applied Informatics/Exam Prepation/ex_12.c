#include <stdio.h>
#include <math.h>

int main()
{
    int C[6][6];

    for (int r = 0; r < 6; r++)
    {
        for (int c = 0; c < 6; c++)
        {
            do
            {
                printf("C[%d][%d] = ", r, c);
                scanf("%d", &C[r][c]);
            } while (!(C[r][c] >= -99 && C[r][c] <= 99));
        }
    }

    for (int r = 0; r < 6; r++)
    {
        for (int c = 0; c < 6; c++)
        {
            printf("%d ", C[r][c]);
        }
        printf("\n");
    }

    for (int r = 0; r < 6; r++)
    {
        for (int c = 0; c < 6; c++)
        {
            if (r == c)
            {
                C[r][c] = 0;
            }

            if (r < c)
            {
                if (C[r][c] < 0)
                {
                    C[r][c] = C[r][c] * -1;
                }
            }
            else
            {
                if (C[r][c] > 0) 
                {
                    C[r][c] = C[r][c] * -1;
                }
            }
        }
    }

    for (int r = 0; r < 6; r++)
    {
        for (int c = 0; c < 6; c++)
        {
            printf("%d ", C[r][c]);
        }
        printf("\n");
    }
    

    return 0;
}