#include <iostream>

using namespace std;

int main ()
{
    string n, adr;
    int id, hours;
    double rate;

    int numberOfEmployees;
    int arr[numberOfEmployees];

    do
    {
        cout << "Enter number for employees(between 1 and 50): ";
        cin >> numberOfEmployees;
    } while (numberOfEmployees <= 0 && numberOfEmployees >= 50);

    for (size_t i = 0; i < numberOfEmployees; i++)
    {
        cout << "Enter name: ";
        cin >> n;
        cout << "Enter address: ";
        cin >> adr;
    }
    
    // TODO: for loop from i = 0 until i < arr[n].length() 
    // to print info for all employees

    // TODO: for loop from i = 0 until i < arr[n].length()
    // print names and monthly payment for all employees

    // TODO: print avg monthly payment with hourly wages

    return 0;
};