#include <iostream>
using namespace std;

int main()
{
    int x[] = {10, 11, 12, 13, 14, 15}, *y, *p;

    for (p = x; p < x + 6; p += 2)
        printf("%3d", *p);
    printf("\n");

    y = x + 3;

    printf("%d %d %d", *(y - 2), *y, *(y + 2));
    printf("\n");

    *y = 100;

    for (p = x; p < x + 6; p++)
        printf("%4d", *p);

    printf("\n");

    return 0;
}