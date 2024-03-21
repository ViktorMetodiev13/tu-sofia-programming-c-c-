#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    c = 0;
    printf("Vavedete stoinost na a: ");
    scanf("%d", &a);
    printf("Vavedete stoinost na b: ");
    scanf("%d", &b);
    c = a + b;
    printf("sumata=%d", &c);
    system("pause");
    return 0;
}