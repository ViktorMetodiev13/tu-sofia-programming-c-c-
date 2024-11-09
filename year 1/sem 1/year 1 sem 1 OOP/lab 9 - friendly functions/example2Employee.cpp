#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
    string name;
    float salary;
    float per;

public:
    Employee()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter salary: ";
        cin >> salary;
        cout << "Enter \% class: ";
        cin >> per;
    }
    float total();
    void display();
    friend void change(Employee &y);
};

float Employee::total()
{
    return (salary += (per * salary) / 100);
}

void Employee::display()
{
    cout << name << " has a salary = " << salary << endl;
    cout << "Percents = " << per << " %\n";
}

void change(Employee &y)
{
    cout << "\nEnter new salary: ";
    cin >> y.salary;
    cout << "Enter new \% class.";
    cin >> y.per;
}

int main()
{
    Employee object;
    cout << "Before change\n";
    object.display();
    cout << "Total = " << object.total() << endl;
    change(object);
    cout << "After change\n";
    object.display();
    cout << "Total = " << object.total() << endl;
    return 0;
}