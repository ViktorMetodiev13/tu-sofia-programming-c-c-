#include <iostream>
using namespace std;

int main()
{
    double x = 30.0, y = 50.0, z = 40.0;

    if (x > 25.0)
    {
        if (z > 50.0)
        {
            y = z;
        }
    }
    else
    {
        y = z;
    }
    printf("x=%.lf, y=%.lf, z=%.lf\n", x, y, z);

    return 0;
}