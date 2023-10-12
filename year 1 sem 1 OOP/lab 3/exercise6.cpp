#include <iostream>
using namespace std;

int main()
{
    int x;

    cout << "Enter a value for X = ";
    cin >> x;

    if (x % 7 == 0)
    {
        cout << "The number is divisible without a remainder by 7";
    }
    else
    {
        cout << "The number is not divisible without a remainder by 7";
    }

    return 0;
}