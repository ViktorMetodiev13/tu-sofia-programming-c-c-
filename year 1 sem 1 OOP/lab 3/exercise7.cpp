#include <iostream>
using namespace std;

int main()
{
    int firstNum, secondNum;
    string operation = "";

    cout << "Enter a value for the first number: ";
    cin >> firstNum;
    cout << "Enter a value for the second number: ";
    cin >> firstNum;
    cout << "Enter an operator: ";
    cin >> operation;

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