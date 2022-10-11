#include <iostream>

using namespace std;

class Student
{

protected:
    char name[20], depart[20];

public:
    virtual void get_data() = 0;
    virtual void show_data() = 0;
};
class Engineering : public Student
{
public:
    void get_data()
    {
        cout << "Enter the information of Engineering student ";
        cout << "\nEnter the name of Student: ";
        cin >> name;
        cout << "Enter Department: ";
        cin >> depart;
    }
    void show_data()
    {
        cout << "The Information of Engineering student is ";
        cout << "\nName : " << name;
        cout << "\nDepartment: " << depart;
    }
};
class Medicine : public Student
{
public:
    void get_data()
    {
        cout << "Enter the information of Medicine student ";
        cout << "\nEnter Name: ";
        cin >> name;
        cout << "Enter Department: ";
        cin >> depart;
    }
    void show_data()
    {
        cout << "\nThe information of Medicine student is ";
        cout << "\nName: " << name;
        cout << "\n Department: " << depart;
    }
};
class Science : public Student
{
public:
    void get_data()
    {
        cout << "\nEnter information of Science Student: ";
        cout << "\nEnter name: ";
        cin >> name;
        cout << "Enter Department: ";
        cin >> depart;
    }
    void show_data()
    {
        cout << "The informaion of Science student is ";
        cout << "\nName: " << name;
        cout << "\nDepartment: " << depart;
    }
};
int main()
{
    Student *stu[3];
    stu[0] = new Engineering;
    stu[1] = new Medicine;
    stu[2] = new Science;
    for (int i = 0; i < 3; i++)
    {
        stu[i]->get_data();
    }
    for (int i = 0; i < 3; i++)
    {
        stu[i]->show_data();
    }
    return 0;
}