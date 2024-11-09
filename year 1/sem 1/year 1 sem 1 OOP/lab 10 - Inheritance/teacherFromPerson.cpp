#include <iostream>

using namespace std;

class Person
{
private:
    string name;
    string address;

public:
    Person(string, string);
    void setName(string n) { name = n; };
    void setAddress(string adr) { address = adr; };
    string getName() { return name; };
    string getAddress() { return address; };

    void displayPerson();

    ~Person()
    {
        cout << "Person destroyed!" << endl;
    }
};

Person::Person(string n, string adr)
{
    name = n;
    address = adr;
};

void Person::displayPerson()
{
    cout << name << " from " << address << endl;
};

class Teacher : public Person
{
private:
    int cabinetNumber;
    int phoneNumber;

public:
    void setCabinetNumber(int cabNum) { cabinetNumber = cabNum; };
    void setPhoneNumber(int phoneNum) { phoneNumber = phoneNum; };
    int getCabinetNumber() { return cabinetNumber; };
    int getPhoneNumber() { return phoneNumber; };

    Teacher(string n, string adr, int cabNum, int phoneNum);
    void changeCabinet(int newCabNum);
    void displayTeacher();

    ~Teacher()
    {
        cout << "Teacher destroyed!" << endl;
    }
};

Teacher::Teacher(string n, string adr, int cabNum, int phoneNum) : Person(n, adr)
{
    cabinetNumber = cabNum;
    phoneNumber = phoneNum;
};

void Teacher::changeCabinet(int newCabNum)
{
    setCabinetNumber(newCabNum);
};

void Teacher::displayTeacher()
{
    displayPerson();
    cout << "Teacher cabinet number: " << cabinetNumber << endl;
    cout << "Phone number: " << phoneNumber << endl;
};

int main()
{
    Person p1("Vladislav dimitrov", "Vidin");
    p1.displayPerson();
    Person p2("Viktor Metodiev", "Vidin");
    p2.displayPerson();

    Teacher t1("Elena Kalcheva", "Sofia", 2401, 3599663);
    t1.displayTeacher();
    Teacher t2("Veska Gancheva", "Pleven", 2304, 3599664);
    t2.displayTeacher();

    int tmpCab;
    cout << "Enter new Cabinet: ";
    cin >> tmpCab;
    t1.changeCabinet(tmpCab);
    t1.displayTeacher();

    if (t1.getCabinetNumber() == tmpCab)
    {
        cout << t1.getName() << "is in " << tmpCab << endl;
    }
    if (t2.getCabinetNumber() == tmpCab) 
    {
        cout << t2.getName() << "is in " << tmpCab << endl;
    }

    if (t1.getAddress() == "Sofia") {
        cout << t1.getName() << "is in Sofia" << endl;
    }
    if (t2.getAddress() == "Sofia") {
        cout << t2.getName() << "is in Sofia" << endl;
    }

    return 0;
}