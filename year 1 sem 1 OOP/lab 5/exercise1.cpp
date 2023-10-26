#include <iostream>
using namespace std;

int main()
{
    int n, a[100], positiveNumbersCout = 0;
    cout << "Enter value for n: ";
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        cin >> a[i];

        if (a[i] > 0)
        {
            positiveNumbersCout++;
        }
    }

    if (positiveNumbersCout == 0)
    {
        printf("There are no positive numbers");
    }
    else
    {
        printf("Positive Numbers = %d\n", positiveNumbersCout);
    }

    return 0;
}
