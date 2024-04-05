#include <stdio.h>

int main()
{
    int A[3][3];

    int max = 0;
    int min = 99;

    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            do
            {
                printf("A[%d][%d] = ", r, c);
                scanf("%d", &A[r][c]);
            } while (!(A[r][c] >= 0 && A[r][c <= 99]));
        }
    }

    printf("\n");
    
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("%d ", A[r][c]);
        }
        printf("\n");
    }

    printf("\n");

    int r_max = 0, c_max = 0, r_min = 0, c_min = 0;

    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            if (max < A[r][c])
            {
                max = A[r][c];
                r_max = r;
                c_max = c;
            }

            if (min > A[r][c])
            {
                min = A[r][c];
                r_min = r;
                c_min = c;
            }
        }
    }
    
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            int temp = A[r_max][c];
            A[r_max][c] = A[r_min][c];
            A[r_min][c] = temp;
        }
    }
    
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("%d ", A[r][c]);
        }
        printf("\n");
    }

    return 0;
}