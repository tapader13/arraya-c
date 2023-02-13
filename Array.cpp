#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter number ";
    cin >> n;
    int students[n];
    for (int i = 0; i < n; i++)
    {
        cin >> students[i];
        sum = sum + students[i];
    }
    cout << " sum is " << sum << endl;
    float avg = (float)sum / n;
    cout << " avg is " << avg << endl;
    int max = students[0];
    int min = students[0];
    for (int i = 1; i < n; i++)
    {
        if (max < students[i])
        {
            max = students[i];
        }
        if (min > students[i])
        {
            min = students[i];
        }
    }
    cout << "max is" << max << endl;
    cout << "min is" << min << endl;
}
