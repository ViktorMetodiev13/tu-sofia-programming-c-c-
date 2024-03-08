#include <stdio.h>

int main()
{
    int n = 19;

    while (n % 5 != 0)
    {
        n++;
    }

    printf("closest num: %d", n);
    

    return 0;
}