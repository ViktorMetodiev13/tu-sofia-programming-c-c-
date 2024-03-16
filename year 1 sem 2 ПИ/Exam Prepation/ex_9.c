#include <stdio.h>

int main()
{
    int C[10][10];

    int max = -200;
    int max_index_r, max_index_c;

    int min = 200;
    int min_index_r, min_index_c; 

    for (int r = 0; r < 10; r++)
    {
        for (int c = 0; c < 10; c++)
        {
            do
            {
                printf("C[%d][%d]: ", r, c);
                scanf("%d", C[r][c]);
            } while (!(C[r][c] >= -200 && C[r][c] <= 200));
        }
    }

    for (int r = 0; r < 10; r++)
    {
        for (int c = 0; c < 10; c++)
        {
            printf("%d ", C[r][c]);
        }
        printf("\n");
    }

    for (int r = 0; r < 10; r++)
    {
        for (int c = 0; c < 10; c++)
        {
            if (min < C[r][c])
            {
                min = C[r][c];
                min_index_r = r;
                min_index_c = c;
            }
            
            if (C)

            if (C[r][c] > 0)
            {
                if (C[r][c] < )
                max = C[r][c];
                max_index_r = r;
                max_index_c = c;
            }
        }
    }

    // int temp = C[max_index_r][max_index_r];
    // C[min_index_r][min_index_c] = max;
    // C[max_index_r][max_index_c] = min;

    return 0;
}