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

class HourlyEmployee : public Person {
    private: 
        int workedHours;
        double hourlyRate;
    public: 
        void setWorkedHours(int hours) { workedHours = hours; };
        void setHourlyRate(double rate) { hourlyRate = rate; };
        int getWorkedHours() { return workedHours; };
        double getHourlyRate() { return hourlyRate; };

        HourlyEmployee(string n, string adr, int id, int hours, double rate);
        void displayEmployee();
    //     friend int monthlyPayment(HourlyEmployee& y);
    
    // int monthlyPayment()
    // {
    //     double salary = workedHours * hourlyRate;
    //     return salary;
    // }

    ~HourlyEmployee()
    {
        cout << "Employee destroyed!" << endl;
    }
};

HourlyEmployee::HourlyEmployee(string n, string adr, int id, int hours, double rate) : Person(n, adr, id)
{
    workedHours = hours;
    hourlyRate = rate;
};

void HourlyEmployee::displayEmployee() 
{
    displayPerson();
    cout << "Worked hours this month: " << workedHours << endl;
    cout << "Hourly rate: " << hourlyRate << endl;
};

int main () 
{

    return 0;
};

