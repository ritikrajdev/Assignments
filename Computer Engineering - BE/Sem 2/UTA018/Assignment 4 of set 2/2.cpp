#include <iostream>
using namespace std;

class Employee
{
private:
    int employee_id;
    char employee_name[100];
    int employee_age;
    long int employee_salary;

public:
    void inputInfo()
    {
        cout << "Enter the Employee Id" << endl;
        cin >> employee_id;
        cout << "Enter the Employee name" << endl;
        cin >> employee_name;
        cout << "Enter the Employee age" << endl;
        cin >> employee_age;
        cout << "Enter the Employee salary" << endl;
        cin >> employee_salary;
    }
    void displayInfo()
    {
        cout << "Employee Id:" << employee_id << endl;
        cout << "Employee Name:" << employee_name << endl;
        cout << "Employee age:" << employee_age << endl;
        cout << "Employee salary:" << employee_salary << endl;
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
        cout<<"Enter the details of employee  "<<i+1<<endl;
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