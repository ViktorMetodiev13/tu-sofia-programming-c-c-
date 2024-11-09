#include <iostream>

using namespace std;

int main() 
{
    int i, n, sum = 0;

    for (n = 3, i = 7; n!=i; n++, i--)
    {
        sum += i+n;
    }
    
    cout << "i = " << i << endl;
    cout << "n = " << n << endl;
    cout << "sum = " << sum << endl;

    return 0;
}