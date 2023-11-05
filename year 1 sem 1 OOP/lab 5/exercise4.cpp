#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 4, 3, 8, 2, 2, 9}, *p = arr;
    printf("%d %d %d\n", p[2], *(arr + 3), *arr + 3);
    printf("%d %d \n", sizeof(p), sizeof(arr));

    return 0;
}