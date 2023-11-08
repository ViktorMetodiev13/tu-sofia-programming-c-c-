#include <iostream>
using namespace std;

int main()
{
    double x = 1, y = 2, z = 3;

    z = x && --y || y / 2;

    cout << "z = " << z << endl;

    return 0;
}