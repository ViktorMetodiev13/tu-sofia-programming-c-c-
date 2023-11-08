#include <iostream>
using namespace std;

int main()
{
    int m;

    printf("m: ");
    cin >> m;

    int a = 2;
    int b = 3;

    switch (m)
    {
    case 0:
        m = a;
    case 1:
        m = a;
    case 2:
        b = b + m;
        break;
    case 3:
        a = a + m;
    case 4:
        b = b - m;
    default:
        m = b;
        break;
    }

    printf("m = %d, a = %d, b = %d", m, a, b);

    return 0;
}