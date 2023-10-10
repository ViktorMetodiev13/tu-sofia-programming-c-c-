#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int r;
    cout << "Enter a value for r: ";
    cin >> r;

    float perimeter =  2 * M_PI * r;
    float area = M_PI * r;

    cout << "Perimeter: " << perimeter << endl;
    cout << "Area: " << area << endl;

    return 0;
}