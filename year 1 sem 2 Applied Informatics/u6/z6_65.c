#include <stdio.h>

int main()
{
    int a[5][7];

    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    int sum4 = 0;
    int sum5 = 0;
    int sum6 = 0;
    int sum7 = 0;

    printf("Elements:\n");
    for (int r = 0; r < 5; r++)
    {
        for (int c = 0; c < 7; c++)
        {
            scanf("%d", &a[r][c]);
        }
    }

    for (int r = 0; r < 5; r++)
    {
        for (int c = 0; c < 7; c++)
        {
            printf("%d ", a[r][c]);
            if (c == 0)
            {
                sum1 += a[r][c];
            }
            else if (c == 1)
            {
                sum2 += a[r][c];
            }
            else if (c == 2)
            {
                sum3 += a[r][c];
            }
            else if (c == 3)
            {
                sum4 += a[r][c];
            }
            else if (c == 4)
            {
                sum5 += a[r][c];
            }
            else if (c == 5)
            {
                sum6 += a[r][c];
            }
            else if (c == 6)
            {
                sum7 += a[r][c];
            }
        }
        printf("\n");
    }

    printf("sum1 = %d\n", sum1);
    printf("sum2 = %d\n", sum2);
    printf("sum3 = %d\n", sum3);
    printf("sum4 = %d\n", sum4);
    printf("sum5 = %d\n", sum5);
    printf("sum6 = %d\n", sum6);
    printf("sum7 = %d", sum7);

    return 0;
}