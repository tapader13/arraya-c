#include <iostream>
using namespace std;
int main()
{
    int n, a[25];
    cout << "Enter any number";
    cin >> n;
    a[0] = 0;
    a[1] = 1;
    for (int i = 2; i < n; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}