#include <stdio.h>

int main()
{
    float a[15];

    printf("Elements:\n");
    for (int i = 0; i < 15; i++)
    {
        scanf("%f", &a[i]);
    }
    
    for (int i = 0; i < 15; i+=3)
    {
        printf("a[%d] = %f", i, a[i]);
    }

    return 0;
}