#include <stdio.h>

int main()
{
    printf("uslovie - ime\n");

    int C[3][3];

    printf("Elements:\n");
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            do
            {
                printf("C[%d][%d] = ", r, c);
                scanf("%d", &C[r][c]);
            } while (!(C[r][c] >= -999 & C[r][c] <= 999));
        }
    }

    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("%d ", C[r][c]);
        }
        printf("\n");
    }

    int r_min_negative_nums = 0;
    // finds negative numbers on a row
    for (int r = 0; r < 3; r++)
    {
        int r_negative_nums_count = 0;

        for (int c = 0; c < 3; c++)
        {
            if (C[r][c] < 0)
            {
                r_negative_nums_count++;
            }
        }

        printf("row %d has %d negative numbers.\n", r, r_negative_nums_count);

        if (r_min_negative_nums < r_negative_nums_count)
        {
            r_min_negative_nums = r;
        }
    }

    int c_min_negative_nums = 0;

    // finds negative numbers in a column
    for (int r = 0; r < 3; r++)
    {
        int c_negative_nums_count = 0;
        for (int c = 0; c < 3; c++)
        {
            if (C[c][r] < 0)
            {
                c_negative_nums_count++;
            }
        }

        printf("column %d has %d negative numbers.\n", r, c_negative_nums_count);

        if (c_min_negative_nums < c_negative_nums_count)
        {
            c_min_negative_nums = r;
        }
    }

    printf("The row with least negative numbers is %d.\n", r_min_negative_nums);
    printf("The column with least negative numbers is %d.\n", c_min_negative_nums);

    return 0;
}