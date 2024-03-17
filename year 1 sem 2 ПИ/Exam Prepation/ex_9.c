#include <stdio.h>

int main()
{
    printf("uslovie.\n");
    printf("tri imena.\n");
    int C[3][3];

    int max = 200;
    int max_index_r, max_index_c;

    int min = 200;
    int min_index_r, min_index_c; 

    printf("\nEnter elements:\n");
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            do
            {
                printf("C[%d][%d]: ", r, c);
                scanf("%d", &C[r][c]);
            } while (!(C[r][c] >= -200 && C[r][c] <= 200));
        }
    }

    printf("\nInitial matrix:\n");
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("%d ", C[r][c]);
        }
        printf("\n");
    }

    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            if (!(min < C[r][c]))
            {
                min = C[r][c];
                min_index_r = r;
                min_index_c = c;
            }
            
            if (C[r][c] > 0 && C[r][c] < max)
            {
                max = C[r][c];
                max_index_r = r;
                max_index_c = c;
            }
        }
        printf("max: %d\n", max);
        printf("min: %d\n", min);
    }

    C[max_index_r][max_index_c] = min;
    C[min_index_r][min_index_c] = max;

    printf("\nMax element is from row %d and column %d.\n", max_index_r, max_index_c);
    printf("Min element is from row %d and column %d.\n", min_index_r, min_index_c);

    printf("\nChanged matrix:\n");
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("%d ", C[r][c]);
        }
        printf("\n");
    }

    return 0;
}