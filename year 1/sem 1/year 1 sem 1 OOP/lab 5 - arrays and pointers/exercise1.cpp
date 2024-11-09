#include <iostream>
using namespace std;

int main()
{
    int n, a[100], positiveNumbersCount = 0;
    cout << "Enter value for n: ";
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        cin >> a[i];

        if (a[i] > 0)
        {
            positiveNumbersCount++;
        }
    }

    if (positiveNumbersCount == 0)
    {
        printf("There are no positive numbers");
    }
    else
    {
        printf("Positive Numbers = %d\n", positiveNumbersCount);
    }

    return 0;
}
