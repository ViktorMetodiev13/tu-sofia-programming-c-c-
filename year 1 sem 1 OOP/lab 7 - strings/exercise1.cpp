#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string input, output = "";
    getline(cin, input);

    for (size_t i = 0; i < input.length(); i++)
    {
        if (islower(input[i]))
        {
            toupper(input[i]);
            output += toupper(input[i]);
        }
        else
        {
            tolower(input[i]);
            output += tolower(input[i]);
        }
    }

    cout << "Output: " << output << endl;

    return 0;
}