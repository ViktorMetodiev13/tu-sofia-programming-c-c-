#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;

    bool isDevisibleByThree = false;

    for (size_t i = a; i <= b; i++)
    {
        if (i % 3 == 0)
        {
            isDevisibleByThree = true;
            cout << "i: " << i << endl;
        }
    }

    if (isDevisibleByThree == false)
    {
        cout << "There are no such numbers" << endl;
    }

    return 0;
}