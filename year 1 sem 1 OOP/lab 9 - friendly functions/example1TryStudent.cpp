#include <iostream>
#include <string>
using namespace std;
class Student
{                // class Student declaration
private:         // encapsulation : private access
    string name; // data members
    unsigned fnum;
    double score;

public: // encapsulation : public access
    Student()
    { // default constructor
        name = "";
        fnum = 0u;
        score = 0.0;
    }
    Student(string, unsigned, double);        // 3-argumnens constructor
    string getName() { return name; };        // inline definition of a getter
    unsigned getFNum() { return fnum; };      // inline definition of a getter
    double getScore() { return score; };      // inline definition of a getter
    void setScore(double s) { score = s; };   // inline definition of a setter
    void setName(string n) { name = n; };     // inline definition of a setter
    void setFNum(unsigned fn) { fnum = fn; }; // inline definition of a setter
    void display();                           // member function
    // destructor
    ~Student()
    {
        cout << "Destroying object!" << endl;
    }
};
// outline definitons
Student::Student(string n, unsigned fn, double sc)
{
    name = n;
    fnum = fn;
    score = sc;
};
void Student::display()
{
    cout << "Name:\t " << name;
    cout << " Faculty ID:\t " << fnum;
    cout << " Score: " << score << endl;
}
//************************ MAIN ************************
int main()
{
    Student *pArr = new Student[3]; // dynamic array
    unsigned fn;
    string n;
    double sc;
    int flag = 0;
    cout << "Enter data:" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Name: ";
        getline(cin, n);
        pArr[i].setName(n);
        cout << "FN: ";
        cin >> fn;
        pArr[i].setFNum(fn);
        cout << "Score: ";
        cin >> sc;
        pArr[i].setScore(sc);
        cin.ignore();
    }
    cout << "Display data:" << endl;
    for (int i = 0; i < 3; i++)
    {
        pArr[i].display();
    } // search by FNum
    cout << "\nSearch by Faculty Number : "
        ;
    cin >> fn;
    for (int i = 0; i < 3; i++)
    {
        if (pArr[i].getFNum() == fn)
        {
            cout << "Student found:\n ";
            pArr[i].display();
            flag++;
            break;
        }
    }
    if (!flag)
        cout << "No student with a FN =" << fn << endl;
    // search by Name
    cout << "\nSearch by Name : ";
    cin >> n;
    flag = 0;
    for (int i = 0; i < 3; i++)
    {
        if (pArr[i].getName().compare(n) == 0)
        {
            cout << "Student found:\n ";
            pArr[i].display();
            flag++;
            break;
        }
    }
    if (!flag)
        cout << "No student with a name = " << n << endl;
    delete[] pArr;
    return 0;
}