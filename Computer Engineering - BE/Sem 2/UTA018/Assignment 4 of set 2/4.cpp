#include <iostream>
using namespace std;
int main()
{
    int i, n, s;
    cout << "Enter total number of elements:"
         << "\n";
    cin >> n;
    int *a = new int(n);
    cout << "Enter " << n << " elements" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    s = a[0];
    for (i = 1; i < n; i++)
    {
        if (s > a[i])
            s = a[i];
    }
    cout << "\nSmallest Number = " << s;
    cout << endl;
    delete (a);
    return 0;
}