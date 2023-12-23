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
        cout << "Person destroyed!" << endl;
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

        Employee();
        Employee(string n, string adr, int id, int hours, double rate);
        void displayEmployee();
        friend double monthlyPayment(Employee& y);
    

    ~Employee()
    {
        cout << "Employee destroyed!" << endl;
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
        cout << "Enter number for employees(between 1 and 50): ";
        cin >> numberOfEmployees;
    } while (numberOfEmployees <= 0 && numberOfEmployees >= 50);

    Employee *arr = new Employee[numberOfEmployees];

    for (size_t i = 0; i < numberOfEmployees; i++)
    {
        cout << "Enter name: ";
        cin >> n;
        cout << "Enter address: ";
        cin >> adr;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter worked hours: ";
        cin >> hours;
        cout << "Enter hourly rate:";
        cin >> rate;
        arr[i] = Employee(n, adr, id, hours, rate);
    }

    for (size_t i = 0; i < numberOfEmployees; i++) {
        arr[i].displayEmployee();
    }

    // TODO: for loop from i = 0 until i < arr[n].length()
    // print names and monthly payment for all employees
    for (size_t i = 0; i < numberOfEmployees; i++)
    {
        cout << "Employees monthly payments: " << endl;
        cout << arr[i].getName() << " earned " << monthlyPayment(arr[i]) << "$ this month" << endl;
    }

    // TODO: print avg monthly payment with hourly wages
    double sum = 0;
    for (size_t i = 0; i < numberOfEmployees; i++)
    {
        sum += monthlyPayment(arr[i]);
    }

    double avgPayment = sum / numberOfEmployees;
    
    cout << "Average monthly monthly payment of employees: " << avgPayment << endl;

    delete[] arr;

    return 0;
};

