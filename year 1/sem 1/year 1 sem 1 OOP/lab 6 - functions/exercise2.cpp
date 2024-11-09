#include <iostream>
using namespace std;


void d1(int a, int b, int c)
{
    a *= 2;
    b *= 2;
    c *= 2;
}

void d2(int *a, int *b, int *c)
{
    *a *= 2;
    *b *= 2;
    *c *= 2;
}

int main()
{
    int x = 1, y = 3, z = 7;
    d1(x, y, z);
    cout << "x=" << x << ", y=" << y << ", z=" << z << endl;
    d2(&x, &y, &z);
    cout << "x=" << x << ", y=" << y << ", z=" << z << endl;
    return 0;
}
