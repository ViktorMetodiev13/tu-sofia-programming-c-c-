#include <iostream>
using namespace std;

int main()
{
    int a;

    cout << "Enter value for a: ";
    cin >> a;

    int sum = 0;
    bool isThereASolution = false;

    for (size_t i = 1; i <= 50; i++)
    {
        if (i % a == 0)
        {
            isThereASolution = true;
            cout << "i: " << i << endl;
            sum++;
        }
    }

    if (isThereASolution == false) {
        cout << "No such numbers";
    }

    return 0;
}