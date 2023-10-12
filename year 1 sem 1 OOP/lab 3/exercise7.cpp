#include <iostream>
using namespace std;

int main()
{
    int firstNum;
    int secondNum;
    string operation = "";

    cout << "Enter a value for the first number: ";
    cin >> firstNum;
    cout << "Enter a value for the second number: ";
    cin >> secondNum;
    cout << "Enter an operator: ";
    cin >> operation;

    cout << "firstNum: " << firstNum << endl;
    cout << "secondNum: " << secondNum << endl;

    double sum = 0;

    if (operation == "+")
    {
        sum = firstNum + secondNum;
    }
    else if (operation == "-")
    {
        sum = firstNum - secondNum;
    }
    else if (operation == "*")
    {
        sum = firstNum * secondNum;
    }
    else if (operation == "/")
    {
        sum = firstNum / secondNum;
    }

    printf("Sum = %.lf", sum);

    return 0;
}