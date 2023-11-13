#include <iostream>
#define N 100

using namespace std;

void display(int x[], int nx);
float aver(int x[], int nx);
int max_elem(int x[], int nx);

int main()
{
    int a[N];
    int b[N];
    int na, nb, i, j;
    float av_a, av_b;

    do
    {
        printf("Enter na (na<100) = ");
        cin >> na;
    } while (na <= 0 || na >= 100);

    j = 0;
    for (size_t i = 0; i < na; i++)
    {
        if (a[i] < 0)
        {
            b[j] = a[i];
            j++;
        }
    }
    nb = j;

    printf("\n Array A: ");
    display(a, na);

    printf("\n Array B: ");
    display(b, nb);

    av_a = aver(a, na);
    printf("\n Average of the array a = %.3f", av_a);

    av_b = aver(b, nb);
    printf("\n Average of the array b = %.3f", av_b);

    printf("\n Max element in the array a = %d", max_elem(a, na));
    printf("\n Max element in the array b = %d", max_elem(b, nb));

    system("pause");
    return 0;
}

void display(int x[], int nx)
{
    int k;
    for (k = 0; k < nx; k++)
    {
        printf("\n Element [%d] = %d", k, x[k]);
    }
}

float aver(int x[], int nx)
{
    int sum = 0;
    int k;
    float av;
    for (k = 0; k < nx; k++)
    {
        sum += x[k];
    }

    if (nx)
    {
        av = float(sum) / nx;
    }

    return av;
}

int max_elem(int x[], int nx)
{
    int max;
    int k;
    max = x[0];

    for (k = 0; k < nx; k++)
    {
        if (x[k] > max)
        {
            max = x[k];
        }
    }

    return max;
}