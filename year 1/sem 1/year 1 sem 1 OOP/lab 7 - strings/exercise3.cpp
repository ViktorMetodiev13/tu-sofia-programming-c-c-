#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    string input;
    int vowelCounter = 0;
    cout << "Enter your full name: ";
    getline(cin, input);

    for (size_t i = 0; i < input.length(); i++)
    {
        if (input[i] == 65 || input[i] == 69 || 
        input[i] == 73 || input[i] == 79 || 
        input[i] == 97 || input[i] == 101 || 
        input[i] == 105 ||input[i] == 111 || 
        input[i] == 117){
            vowelCounter++;
        }
    }

    printf("The count of vowels in your full name is: %d\n", vowelCounter);

    return 0;
}