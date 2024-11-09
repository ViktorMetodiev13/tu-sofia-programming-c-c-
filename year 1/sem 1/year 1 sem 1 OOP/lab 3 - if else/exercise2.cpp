#include <iostream>
using namespace std;

int main()
{
    int speed = 75;
    double fee = 0;

    if (speed > 35)
    {
        fee = 20.0;
    }
    else if (speed > 50)
    {
        fee = 40.0;
    }
    else if (speed > 75)
    {
        fee = 60.0;
    }

    printf("fee=%.lf", fee);

    return 0;
}