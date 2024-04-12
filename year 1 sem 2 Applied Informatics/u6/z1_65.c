#include <stdio.h>

int main()
{
    int a[6], min_num, min_num_index;

    printf("Elements:\n");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &a[i]);
    }

    min_num = a[0];
    min_num_index = 0;

    for (int i = 0; i < 6; i++)
    {
        if (min_num > a[i])
        {
            min_num = a[i];
            min_num_index = i;
        }
    }

    printf("index = %d, min number = %d\n", min_num_index, min_num);

    return 0;
}