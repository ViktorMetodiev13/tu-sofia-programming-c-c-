#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int x;

    cout << "Enter value for x: ";
    cin >> x;

    do
    {
        cout << "The value for x should be 0 or positive number. Enter other value for x: ";
        cin >> x;
    } while (x < 0);
    

    double result = sqrt(x);

    cout << "Result: " << result << endl;

    return 0;
}