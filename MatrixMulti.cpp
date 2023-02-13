#include <iostream>
using namespace std;
int main()
{
    int first[10][10], second[10][10], result[10][10], r1, c1, r2, c2, sum = 0;
    cout << "Enter col and row for first matrix";
    cin >> r1 >> c1;
    cout << "Enter col and row for second matrix";
    cin >> r2 >> c2;
    // while (c1 != r2)
    // {
    //     cout << "Enter valid col and row for matrix";
    //     cout << "Enter col and row for first matrix";
    //     cin >> r1 >> c1;
    //     cout << "Enter col and row for second matrix";
    //     cin >> r2 >> c2;
    // }
    cout << "first value is =" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << "first[" << i << "][" << j << "] = ";
            cin >> first[i][j];
        }
    }
    cout << "second value is =" << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << "second[" << i << "][" << j << "] = ";
            cin >> second[i][j];
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                sum = sum + first[i][k] * second[k][j];
            }
            result[i][j] = sum;
            sum = 0;
                }
    }

    cout << "first result is =" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << first[i][j] << " ";
        }
        cout << endl;
    }
    cout << "second result is =" << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << second[i][j] << " ";
        }
        cout << endl;
    }
    cout << " result is =" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}