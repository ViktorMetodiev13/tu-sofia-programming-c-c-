#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a, b, c;
    double x1;
    double x2;

    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;
    cout << "Enter value for c: ";
    cin >> c;

    if (a == 0 && b == 0)
    {
        cout << "The degenerate equation";
        exit(1);
    }

    if (a == 0 && b != 0)
    {
        // x1 equal to x2 equal to x
        double x;
        x = -(c / b);
        cout << "x = " << x << endl;
        exit(1);
    }

    if (a != 0 && b != 0 && c == 0)
    {
        x1 = -(b / a);
        x2 = 0;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
        exit(1);
    }

    if (a != 0 && b != 0 && c != 0)
    {
        double d = (b * b) - (4 * a * c);
        if (d > 0)
        {
            x1 = (-(b) + sqrt(d)) / 2 * a;
            x2 = (-(b)-sqrt(d)) / 2 * a;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
            exit(1);
        }

        if (d == 0)
        {
            // x1 equal to x2 equal to x
            double x;
            x = -(b / (2 * a));
            cout << "x = " << x << endl;
            exit(1);
        }

        if (d < 0)
        {
            cout << "The equation has no real numbers for roots." << endl;
            exit(1);
        }
    }

    return 0;
}