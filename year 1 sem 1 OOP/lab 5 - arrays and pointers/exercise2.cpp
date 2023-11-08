#include <iostream>
using namespace std;

int main()
{
    int n, a[100], maxNum = 0, maxNumIndex = 0, sum = 0;

    printf("Enter value for n: ");
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        cin >> a[i];

        if (a[i] > maxNum)
        {
            maxNum = a[i];
            maxNumIndex = i;
        }
    }

    for (size_t i = 0; i < maxNumIndex; i++)
    {
        sum += a[i];
    }
    
    printf("Max Number = %d\n", maxNum);
    printf("Max Number index = %d\n", maxNumIndex);
    printf("Sum = %d\n", sum);

    return 0;
}