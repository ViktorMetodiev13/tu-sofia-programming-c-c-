#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);

    a = a - b;
    b = a + b;

    a = b - a;

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}