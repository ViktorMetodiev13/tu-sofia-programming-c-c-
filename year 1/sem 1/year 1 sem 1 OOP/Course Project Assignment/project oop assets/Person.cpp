#include <iostream>

using namespace std;

class Person {
    private:
        string name;
        string address;
        int ID;
    public: 
        void setName(string n) { name = n; };
        void setAddress(string adr) { address = adr; };
        void setID(int id) { ID = id; };
        string getName() { return name; };
        string getAddress() { return address; };
        int getID() { return ID; };

        Person(string n, string adr, int id);
        void displayPerson();

    ~Person() 
    {
        cout << "Person saved and destroyed!" << endl;
    }
};

Person::Person(string n, string adr, int id)
{
    name = n;
    address = adr;
    ID = id;
};

void Person::displayPerson() 
{
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "ID: " << ID << endl;
};

class Employee : public Person {
    private: 
        int workedHours;
        double hourlyRate;
    public: 
        void setWorkedHours(int hours) { workedHours = hours; };
        void setHourlyRate(double rate) { hourlyRate = rate; };
        int getWorkedHours() { return workedHours; };
        double getHourlyRate() { return hourlyRate; };

        Employee() : Person("", "", 0), workedHours(0), hourlyRate(0.0) {};
        Employee(string n, string adr, int id, int hours, double rate);
        void displayEmployee();
        friend double monthlyPayment(Employee& y);

    ~Employee()
    {
        cout << "Employee saved and destroyed!" << endl;
    }
};

Employee::Employee(string n, string adr, int id, int hours, double rate) : Person(n, adr, id)
{
    workedHours = hours;
    hourlyRate = rate;
};

void Employee::displayEmployee()
{
    displayPerson();
    cout << "Worked hours this month: " << workedHours << endl;
    cout << "Hourly rate: " << hourlyRate << endl;
};

double monthlyPayment(Employee& y) {
    double salary = y.workedHours * y.hourlyRate;
    return salary;
};

int main ()
{
    string n, adr;
    int id, hours;
    double rate;

    int numberOfEmployees;

    do
    {
        cout << "Enter number for employees(between 0 and 50): ";
        cin >> numberOfEmployees;
    } while (numberOfEmployees <= 0 || numberOfEmployees > 50);

    Employee *arr = new Employee[numberOfEmployees];

    for (int i = 0; i < numberOfEmployees; i++)
    {
        cout << "Enter name: ";
        cin >> n;
        cout << "Enter address: ";
        cin >> adr;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter worked hours: ";
        cin >> hours;
        cout << "Enter hourly rate: ";
        cin >> rate;
        arr[i] = Employee(n, adr, id, hours, rate);
    }

    for (int i = 0; i < numberOfEmployees; i++) {
        arr[i].displayEmployee();
    }

    cout << "Employees monthly payments: " << endl;
    for (int i = 0; i < numberOfEmployees; i++)
    {
        cout << arr[i].getName() << " earned " << monthlyPayment(arr[i]) << "$ this month." << endl;
    }

    double sum = 0;
    for (int i = 0; i < numberOfEmployees; i++)
    {
        sum += monthlyPayment(arr[i]);
    }

    double avgPayment = sum / numberOfEmployees;

    cout << "The Average monthly payment of employees is " << avgPayment << "$." << endl;

    delete[] arr;

    return 0;
};


