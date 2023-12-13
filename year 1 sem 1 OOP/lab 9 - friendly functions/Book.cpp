#include <iostream>
#include <string>

using namespace std;

class Book 
{
    private:
        string title;
        string author;
        int year;
        double price;

    public:
        Book()
        {
            title = "";
            author = "";
            year = 0u;
            price = 0.0;
        }
        Book(string, string, int, double);

        string getTitle() { return title; };
        string getAuthor() { return author; };
        unsigned getYear() { return year; };
        double getPrice() { return price; };
        void setTitle(string t) { title = t; };
        void setAuthor(string aut) { author = aut; };
        void setYear(unsigned y) { year = y; };
        void setPrice(double p) { price = p; };

    void display();

    ~Book()
    {
        cout << "Destroying Object!" << endl;
    }
};

Book::Book(string t, string aut, int y, double p){
    title = t;
    author = aut;
    year = y;
    price = p;
};

void Book::display()
{
    cout << "\n";
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Year: " << year << endl;
    cout << "Price: " << price << endl;
    cout << "\n";
}

int main()
{
    Book *pArr = new Book[3];
    string t;
    string aut;
    unsigned y;
    double p;

    int flag = 0;
    cout << "Enter data: " << endl;

    for(int i = 0; i < 6; i++) {
        cout << "Title: "; 
        getline(cin, t); 
        pArr[i].setTitle(t);
        cout << "Author: ";
        cin >> aut;
        pArr[i].setAuthor(aut);
        cout << "Year: ";
        cin >> y; 
        pArr[i].setYear(y);
        cout << "Price: "; 
        cin >> p; 
        pArr[i].setPrice(p);
        cin.ignore();
    }

    for(int i = 0; i < 6; i++) {
        pArr[i].display();
    }

    cout << "Search books by year: ";
    cin >> y;

    for(int i = 0; i < 6; i++) 
    {
        if(pArr[i].getYear() == y) {
            cout << "Books found: " << endl;
            pArr[i].display();
            flag++;
            break;
        }
    }

    if(flag == 0)
    {
        cout << "No Books found published in " << y << endl;
    }

    cout << "Search by author: ";
    cin >> aut;
    flag = 0;

    for(int i = 0; i < 6; i++) {
        if(pArr[i].getAuthor() == aut) {
            cout << "Books found: " << endl;
            pArr[i].display();
            flag++;
            break;
        }
    }
    
    if(flag == 0) {
        cout << "No books found published by " << aut << endl;
    }
    delete[] pArr;

    return 0;
}

