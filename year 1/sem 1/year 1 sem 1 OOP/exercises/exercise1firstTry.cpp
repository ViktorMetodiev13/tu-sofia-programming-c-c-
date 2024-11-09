#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a, t, c, bt;
    double tn, tk, dt;
    double Cp;

    cout << "Enter values for a, t, c and bt: ";
    cin >> a >> t >> c >> bt;
    cout << "Enter values for tn, tk and dt: ";
    cin >> tn >> tk >> dt;

    for (double t = tn; t <= tk; t += dt)
    {
        Cp = (a * ((t * t + 1) / (sqrt(bt + 3)))) + c;
    }

    cout << "Cp = " << Cp << endl;

    return 0;
}