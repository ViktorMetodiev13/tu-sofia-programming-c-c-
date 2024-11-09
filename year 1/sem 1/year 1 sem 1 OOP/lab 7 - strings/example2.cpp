#include <iostream>
#include <string>
using namespace std;

int main()
{
    string full_name, nickname, address;
    string greeting("Hello, ");
    cout << "Enter your full name: ";
    getline(cin, full_name);
    cout << "Your full name is: " << full_name << endl;
    cout << "Enter your nickname: ";
    cin >> nickname;
    greeting += nickname;
    cout << "Enter your address on separate lines\n";
    cout << "End with $\n";
    getline(cin, address, '$');
    cout << "Your address is: " << address << endl;
    system("pause");

    return 0;
}