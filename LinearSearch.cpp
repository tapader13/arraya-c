#include <iostream>
using namespace std;
int main()
{
    int n, pos = -1;
    cout << "Enter searching value";
    int a[] = {10, 20, 30, 40, 50};
    cin >> n;
    for (int i = 0; i < 5; i++)
    {
        if (n == a[i])
        {
            pos = i + 1;
            break;
        }
    }
    if (pos == -1)
    {
        cout << "n not found";
    }
    else
    {
        cout << "found";
    }
}