#include <iostream>
using namespace std;

int main()
{
    int a, b, max;

    cin >> a;
    cin >> b;

    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }

    cout << max;

    return 0;
}