#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int A = 3;
    int B = 5;
    int list[8] = {9, 16, B, 8, 5, 16, 4, A};
    int foo = fabs(A - B + 1) + 3;
    for (int j = 2; j < 5; j++)
        if (list[j] > foo)
        {
            foo = list[j] - 1;
            list[j] = A + j % 3;
        }

    cout << foo << endl;

    cout << list[0] << " ";
    cout << list[1] << " ";
    cout << list[2] << " ";
    cout << list[3] << " ";
    cout << list[4] << " ";
    cout << list[5] << " ";
    cout << list[6] << " "; 
    cout << list[7] << " ";
    cout << list[8] << " ";
    cout << list[9] << " ";

    return 0;
}