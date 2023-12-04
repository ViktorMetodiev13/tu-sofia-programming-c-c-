#include <iostream>
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
        name = "", fnum = 0, score = 0.0;
    };

    void setData(const string, unsigned, double);
    string setName() { return name; };
    unsigned getFNum() { return fnum; };
    double setScore() { return score; };
    void display();
    bool NameIsFound(string);
    bool FNumIsFound(unsigned);
};

void Student::setData(const string n, unsigned f, double s)
{
    name = n, fnum = f, score = s;
}

void Student::display()
{
    cout << "Name: " << name << endl;
    cout << "Faculty ID: " << fnum << endl;
    cout << "Score: " << score << endl;
}

bool Student::NameIsFound(string n)
{
    if (name.compare(n) == 0)
        return true;

    return false;
}

bool Student::FNumIsFound(unsigned n)
{
    if (n == fnum)
        return true;

    return false;
}

int main()
{
    Student st;
    st.display();

    st.setData("Ivan Petrov", 13769, 5.67);

    cout << "\nFaculty ID only: " << st.getFNum();

    string n = "Ivan Petrov";
    cout << "\nAppearance of: " << n << endl;

    if (st.NameIsFound(n))
    {
        cout << "Yes!" << endl;
    }
    else
    {
        cout << "No!" << endl;
    }

    cout << "Search for FN 12000: ";
    cout << boolalpha << st.FNumIsFound(12000) << endl;
    
    return 0;
}