#include <iostream>
using namespace std;

int main()
{
    int a[10], sum = 0, max, min, i_max, i_min;

    float s;

    for (size_t i = 0; i < 10; i++)
    {
        printf("a[%d] = ", i);
        cin >> a[i];
    }

    for (size_t i = 0; i < 10; i++)
    {
        sum += a[i];
    }

    s = (float)sum / 10; // casting to float type
    printf("Average value = %.2f\n", s);

    max = a[0];
    i_max = 0;
    min = a[0];
    i_min = 0;

    for (size_t i = 1; i < 10; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            i_max = i;
        }
        if (a[i] < min)
        {
            min = a[i];
            i_min = i;
        }
    }

    printf("Max element = a[%d] = %d\n", i_max, max);
    printf("Min element = a[%d] = %d\n", i_min, min);

    return 0;
}