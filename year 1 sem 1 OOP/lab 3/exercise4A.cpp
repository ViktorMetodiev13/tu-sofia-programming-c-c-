#include <iostream>
using namespace std;

int main()
{   
    int m = 1;
    int a = 2;
    int b = 3;

    switch (m)
    {
    case 0:

    case 1:
        m = a;
    case 2:
        b = b + m;
        break;
    case 3:
        a = a + m;
    case 4:
        b = b - m;
        break;
    default:
        m = b;
        break;
    }

    printf("m = %.lf, a = %.lf, b = %.lf", m, a, b);

    return 0;
}