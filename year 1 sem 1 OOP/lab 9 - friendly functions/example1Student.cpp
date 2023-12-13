#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string name;
    unsigned fnum;
    double score;

public:
    Student()
    {
        name = "";
        fnum = 0u;
        score = 0.0;
    }
    Student(string, unsigned, double);

    string getName() { return name; };
    unsigned getFNum() { return fnum; };
    double getScore() { return score; };
    void setScore(double s) { score = s; };
    void setName(string n) { name = n; };
    void setFNum(unsigned fn) { fnum = fn; };

    void display();

    ~Student()
    {
        cout << "Destroying object!" << endl;
    }
};

Student::Student(string n, unsigned fn, double sc)
{
    name = n;
    fnum = fn;
    score = sc;
};

void Student::display()
{
    cout << "\n";
    cout << "Name: " << name << endl;
    cout << "Faculty ID: " << fnum << endl;
    cout << "Score: " << score << endl;
    cout << "\n";
};

int main()
{
    Student *pArr = new Student[3];
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

    for (int i = 0; i < 3; i++)
    {
        pArr[i].display();
    }

    cout << "Search by Faculty Number: ";
    cin >> fn;
    for (int i = 0; i < 3; i++)
    {
        if (pArr[i].getFNum() == fn)
        {
            cout << "Student found: " << endl;
            pArr[i].display();
            flag++;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "No student with a FN =" << fn << endl;
    }

    cout << "\nSearch by Name: ";
    cin >> n;
    flag = 0;
    for (int i = 0; i < 3; i++)
    {
        if (pArr[i].getName() == n)
        {
            cout << "Student found:" << endl;
            pArr[i].display();
            flag++;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "No Student with a name = " << n << endl;
    }
    delete[] pArr;

    return 0;
}