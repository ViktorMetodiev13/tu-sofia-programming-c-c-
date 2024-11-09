#include <iostream>
using namespace std;

int main() {
    float a;
    cout << "Enter value for a: ";
    cin >> a;

    float perimeter = 4 * a;
    float area = a * a;

    cout << "Perimeter: " << perimeter << endl;
    cout << "Area: "<< area << endl;

    return 0;
}