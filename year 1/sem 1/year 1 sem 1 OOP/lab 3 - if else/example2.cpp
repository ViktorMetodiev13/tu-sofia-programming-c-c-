#include <iostream>
using namespace std;

int main()
{
    int a, b, max;

    printf("a: ");
    cin >> a;
    printf("b: ");
    cin >> b;

    max = a;

    if (max < b)
    {
        max = b;
    }
    
    printf("max = %d", max);

    return 0;
}