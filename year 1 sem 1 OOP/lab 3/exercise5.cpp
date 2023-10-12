#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;
    cout << "Enter value for c: ";
    cin >> c;

    int max;

    if (a > b && a > c)
    {
        max = a;
    }
    else if (b > a && b > c)
    {
        max = b;
    }
    else if (c > a && c > b)
    {
        max = c;
    }

    // printf("a = %d, b = %d, c = %d", a, b, c);
    printf("max = %d", max);

    return 0;
}