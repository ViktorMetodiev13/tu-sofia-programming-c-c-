#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *p = (int *)(&arr + 1);
    printf("%d %d \n", *(arr + 1), *(p - 1));

    return 0;
}