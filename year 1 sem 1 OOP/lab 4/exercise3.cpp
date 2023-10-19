#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;

    for (size_t i = a; i <= b; i++)
    {
        if (i % 3 == 0)
        {
            cout << "i: " << i << endl;
        }
    }


    return 0;
}