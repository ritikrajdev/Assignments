#include <iostream>
#include <exception>
using namespace std;
class MyException : public exception
{
public:
    const char *what() const throw()
    {
        return "Attempted to divide by zero!\n";
    }
};
int main()
{
    try
    {
        try
        {
            int x, y;
            cout << "Enter the two numbers : \n";
            cin >> x >> y;
            if (y == 0)
            {
                MyException z;
                throw z;
            }
            else
            {
                cout << "x / y = " << x / y << endl;
            }
        }
        catch (exception &e)
        {
            cout << e.what();
            throw;
        }
    }
    catch (exception &e)
    {
        cout << "\n Try division by another number" << endl;
    }
    catch (...)
    {
        cout << "Default exception" << endl;
    }
}