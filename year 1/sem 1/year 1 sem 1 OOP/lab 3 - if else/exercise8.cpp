#include <iostream>
using namespace std;

int main()
{
    int points;

    cout << "Enter a value for points between 0 and 100: ";
    cin >> points;

    int grade = 0;

    if (points < 50)
    {
        grade = 2;
    }
    else if (points >= 50 && points < 60)
    {
        grade = 3;
    }
    else if (points >= 60 && points < 70)
    {
        grade = 4;
    }
    else if (points >= 70 && points < 80)
    {
        grade = 5;
    }
    else if (points >= 80 && points <= 100)
    {
        grade = 6;
    }
    else
    {
        cout << "Incorrect input";
    }

    cout << "Grade: " << grade << endl;

    return 0;
}