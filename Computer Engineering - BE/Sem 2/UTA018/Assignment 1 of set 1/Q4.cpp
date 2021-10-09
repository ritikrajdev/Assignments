#include <iostream>
using namespace std;

struct Student
{
    string Name;
    int roll;
    float marks;

    void setStudentData()
    {
        cin >> Name;

        cin >> roll;

        cin >> marks;
    }

    void getStudentData()
    {
        cout << "Name:"
             << " " << Name << endl;
        cout << "Roll no.:"
             << " " << roll << endl;
        cout << "Marks:"
             << " " << marks << endl;
    }
};
int main()
{
    Student s[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        cout << "Enter details of student" << i + 1 << ":" << endl;
        s[i].setStudentData();
    }

    for (int i = 0; i < 3; i++)
    {
        cout << "Details of student" << i + 1 << ":" << endl;
        s[i].getStudentData();
    }

    return 0;
}