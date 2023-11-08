#include <iostream>
using namespace std;

int main()
{
    int x = 1, y = 2, k = 3.0f;

    k -= ++x - y/2.0f;

    cout << "k = " << k << endl;

    return 0;
}