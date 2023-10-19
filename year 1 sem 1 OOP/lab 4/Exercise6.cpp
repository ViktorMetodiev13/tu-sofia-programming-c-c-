#define _USE_MATH_

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int degrees;

    cout << "Enter value for degrees: ";
    cin >> degrees;

    if (degrees < 45 || degrees > 60)
    {
        cout << "The value for degrees should be between 45 and 60 (included). Enter other value for degrees: ";
        cin >> degrees;
    }

    double result = cos((degrees * M_PI) / 180);

    cout << "Result: " << result << endl;

    return 0;
}