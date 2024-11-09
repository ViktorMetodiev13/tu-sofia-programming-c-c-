#include <iostream>
using namespace std;

void func1(int x, int *prev, int *next)
{
    *prev = x - 1;
    *next = x + 1;
}

int main()
{
    int x = 100, y, z;
    func1(x, &y, &z);
    cout << "x=" << x << ", y=" << y << ", z=" << z;
    return 0;
}