#include <iostream>
using namespace std;
void divisibility()
{
    int n, d, result;
    cout << "Enter value of n: " << endl;
    cin >> n;
    cout << "Enter the value of d: " << endl;
    cin >> d;
    if (d == 0)
    {
        throw d;
    }
    else
    {
        throw runtime_error(" Chill");
    }
    result = n / d;
}
void vote()
{
    int age;
    cout << "Enter yor age: " << endl;
    cin >> age;
    if (age <= 18)
    {
        throw age;
    }
    else
        throw runtime_error(" your age is more than 18 years");
}
void check_input_alpha()
{
    char input_char;
    cout << "Enter the input: " << endl;
    cin >> input_char;
    if ((input_char >= 65 && input_char <= 90) || (input_char >= 97 && input_char <= 122))
        throw input_char;
    else
        throw runtime_error(" No digits and symbols");
}
int main()
{
    try
    {
        divisibility();
    }
    catch (int ex)
    {
        cout << "Exception: Divisibilty by zero is not possible" << endl;
    }
    catch (runtime_error ex)
    {
        cout << "Division is possible" << ex.what() << endl;
    }
    //vote
    try
    {
        vote();
    }
    catch (int ex)
    {
        cout << "Your age is :" << ex << " ,so you are not allowed to vote" << endl;
    }
    catch (runtime_error ex)
    {
        cout << "You are allowed to vote because" << ex.what() << endl;
    }
    //check alphabets input
    try
    {
        check_input_alpha();
    }
    catch (runtime_error ex)
    {
        cout << "Only Aphabets are allowed as input" << ex.what() << endl;
    }
    catch (char ex)
    {
        cout << "Entered input is alphabet" << endl;
    }
    //Default exception
    catch (...)
    {
        cout << "Default exception" << endl;
    }

    return 0;
}
