#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string input;
    int numberCount = 0, letterCount = 0;
    cout << "Enter a string: ";
    getline(cin, input);

    for (size_t i = 0; i < input.length(); i++)
    {
        if (isalpha(input[i]))
        {
            letterCount++;
        }
        else if (isdigit(input[i]))
        {
            numberCount++;
        }
    }

    printf("There are %d letters in this string.\n", letterCount);
    printf("There are %d numbers in this string.\n", numberCount);

    return 0;
}