#include <iostream>
#include <string>

using namespace std;

class Person {
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

    ~Person() {
        cout << "Person destoyed!" << endl;
    }
};

Person::Person(string n, string adr) {
    name = n;
    address = adr;
};

void Person::displayPerson() {
    cout << name << " from " << address << endl;
};

class Student : public Person {
    int fnum;
    float score;
    public:
        void setFNum(int fn) { fnum = fn; };
        void setScore(int sc) { score = sc; };
        int getFNum() { return fnum; };
        float getScore() { return score; };

        Student(string n, string ad, int fn, float sc);
        void displayStudent();
        void changeName(string);
        void changeAddress(string);
        ~Student() 
        {
            cout << "Student destoyed!" << endl;
        }
};

Student::Student(string n, string ad, int fn, float sc) : Person(n, ad) {
    fnum = fn;
    score = sc;
};

void Student::displayStudent() 
{
    displayPerson();
    cout << "Student: " << fnum << " " << score << "  " << endl;
};

void Student::changeName(string newName) {
    setName(newName);
};

void Student::changeAddress(string newAdr) {
    setAddress(newAdr);
};

int main()
{
    Person p1("Peter Petrov", "Plovdiv");
    p1.displayPerson();
    Person p2("Ana Dimitrova", "Ruse");
    p2.displayPerson();

    Student st1("Ivan Velev", "Pleven", 1012001, 4.32f);
    st1.displayStudent();
    Student st2("Maria Koleva", "Varna", 1012002, 3.62f);
    st2.displayStudent();

    string tmp_ad;
    cout << "New Address: ";
    cin >>tmp_ad;
    st1.changeAddress(tmp_ad);
    st1.displayStudent();
    if (st1.getScore() > st2.getScore())
    {
        cout << "Better score has " << st1.getName() << endl;
    }
    else 
    {
        cout << "Better score has " << st2.getName() << endl;
    }

    return 0;
}

