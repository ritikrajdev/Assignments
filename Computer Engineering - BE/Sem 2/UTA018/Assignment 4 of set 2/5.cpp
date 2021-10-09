#include <iostream>
using namespace std;

class Employee
{
public:
    int *employee_id;
    char *employee_name;
    int *employee_age;
    int *employee_salary;

    Employee()
    {
        employee_name = new char[100];
        employee_id=new int;
        *employee_id=0;
        employee_age=new int;
        *employee_age=0;
        employee_salary=new int;
        *employee_salary=0;
    }

    void inputInfo()
    {
        cout << "Enter the Employee Id" << endl;
        cin >> *employee_id;
        cout << "Enter the Employee name" << endl;
        cin >> employee_name;
        cout << "Enter the Employee age" << endl;
        cin >> *employee_age;
        cout << "Enter the Employee salary" << endl;
        cin >> *employee_salary;
    }
    void displayInfo()
    {
        cout << "Employee Id:" << *employee_id << endl;
        cout << "Employee Name:" << *employee_name << endl;
        cout << "Employee age:" << *employee_age << endl;
        cout << "Employee salary:" << *employee_salary << endl;
    }
};
int main()
{
    int i, n;

    cout << "Enter the no. of employees" << endl;
    cin >> n;
    Employee emp[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter the details of employee  " << i + 1 << endl;
        emp[i].inputInfo();
    }
    cout << "Details of Employees are:" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Employee " << i + 1 << endl;
        emp[i].displayInfo();
    }

    return 0;
}