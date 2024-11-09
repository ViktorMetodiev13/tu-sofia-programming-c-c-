#include <stdio.h>

int main()
{
    int a[15];

    printf("Elements:\n");
    for (int i = 0; i < 15; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for (int i = 15; i >= 0; i--)
    {
        printf("a[%d]: %d\n", i, a[i]);
    }

    return 0;
}