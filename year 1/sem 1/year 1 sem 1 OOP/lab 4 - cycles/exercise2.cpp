#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter value for x: ";
    cin >> x;

    while (x > 0)
    {
        cout << "x: " << x << endl;
        x--;
    }
    

    return 0;
}