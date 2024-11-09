#include <iostream>
using namespace std;

int main()
{
    int n, a[100], counter = 0;
    cout << "Enter value for n: ";
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        cin >> a[i];

        if (a[i] % 7 == 0)
        {
            counter++;
        }
    }

    printf("counter: %d", counter);

    return 0;
}