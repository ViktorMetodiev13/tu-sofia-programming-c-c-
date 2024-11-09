#include <iostream>
using namespace std;

int main()
{
    int x, a, b;
    cout << "Enter x = ";
    cin >> x;
    cout << "Lower limit ";
    cin >> a;
    cout << "Upper limit ";
    cin >> b;

    if (a >= b)
    {
        printf("Incorrect data!");
        exit(1);
    }

    if (x >= a && x <= b)
        printf("Value %d is in [%d %d]\n", x, a, b);
    else
        printf("Value %d is out of [%d %d]\n", x, a, b);

    return 0;
}