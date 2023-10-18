#include <iostream>
using namespace std;

int main()
{
    double a, b;
    double x;

    cout << "Enter a Number for a: ";
    cin >> a;
    cout << "Enter a Number for b: ";
    cin >> b;

    if (a == 0 && b == 0)
    {
        cout << "The degenerate equation";
        exit(1);
    }

    if (a == 0)
    {
        cout << "Error";
        exit(1);
    }

    if (a != 0)
    {
        x = -(b / a);
        cout << "x = " << x << endl;
        exit(1);
    }

    return 0;
}