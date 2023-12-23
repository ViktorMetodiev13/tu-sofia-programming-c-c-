#include <iostream>
using namespace std;

class teacher
{
    private:
        string name;
        string fac;
        string discipline;
        int cabinetNum;
    
    public:
        teacher();
        teacher(string, string, string, int);

    void show();
    
    
    ~teacher()
    {
        cout << "Destroying object!" << endl;
    }
};