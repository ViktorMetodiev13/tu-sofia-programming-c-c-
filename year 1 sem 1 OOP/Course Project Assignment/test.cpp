#include <iostream>

using namespace std;

int main () 
{
    // TODO: do while doesn't work - fix it
    int n;
    int arr[n];

    do
    {
        cout << "Enter number for employees(between 1 and 50): ";
        cin >> n;
    } while (n <= 0 && n >= 50);

    cout << "n = " << n << endl;
    // TODO: for loop from i = 0 until i < arr[n].length() 
    // to print info for all employees

    // TODO: for loop from i = 0 until i < arr[n].length()
    // print names and monthly payment for all employees

    // TODO: print avg monthly payment with hourly wages

    return 0;
};