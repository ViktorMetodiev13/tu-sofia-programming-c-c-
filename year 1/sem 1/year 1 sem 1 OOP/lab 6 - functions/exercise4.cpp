#include <iostream>
using namespace std;


float fa(int *x, int n)
{
    int sum = 0, k = 0, i;
    for (i = 0; i < n; i++)
    {
        if (x[i] % 5 == 0)
        {
            sum += x[i];
            k++;
        }
    }
    return (float)sum / k;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("%.1f\n", fa(a, 10));
    return 0;
}
