#include <iostream>
using namespace std;
class Publication
{
    string title;
    float price;

public:
    void getData()
    {
        cout << "\nEnter the title :" << endl;
        cin>>title;
        cout << "Enter price :" << endl;
        cin >> price;
    }
    void putData()
    {
        cout << "\nTitle: " << title << "\nPrice: " << price;
    }
};
class Book : public Publication
{
private:
    int pages;

public:
    void getData()
    {
        Publication::getData();
        cout << "Enter Pages : ";
        cin >> pages;
    }

    void putData()
    {
        Publication::putData();
        cout << "\nPages : " << pages;
    }
};

class Tape : public Publication
{
private:
    float minutes;

public:
    void getData()
    {
        Publication::getData();
        cout << "Enter Minutes :";
        cin >> minutes;
    }

    void putData()
    {
        Publication::putData();
        cout << "\nMinutes : " << minutes;
    }
};

int main()
{
    Book b;
    Tape t;
    b.getData();
    t.getData();

    cout << "\a" << endl;
    b.putData();
    cout << endl;
    t.putData();
    cout << endl;

    return 0;
}