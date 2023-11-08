#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    int b = 1;
    int c = 0;
    int d = 2;
    int n = 0;

    if (a > b)
    {
        c = a;
        if (a == d)
        {
            exit(1);
        }
        else
        {
            n = a - b;
        }
    }
    else
    {
        if (d > b)
        {
            n = a;
            exit(1);
        }
        else
        {
            n = b;
        }
    }

    printf("a = %.lf, b = %.lf, c = %.lf, d = %.lf, n = %.lf", a, b, c, d, n);

    return 0;
}