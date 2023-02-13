#include <iostream>
using namespace std;
int main()
{
    int nofRow, nofCol, A[10][10], B[10][10], C[10][10];
    cout << "Enter nofRows And nofCols value : ";
    cin >> nofRow >> nofCol;
    cout << "A value is =" << endl;
    for (int i = 0; i < nofRow; i++)
    {
        for (int j = 0; j < nofCol; j++)
        {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
    }
    cout << "B value is =" << endl;
    for (int i = 0; i < nofRow; i++)
    {
        for (int j = 0; j < nofCol; j++)
        {
            cout << "B[" << i << "][" << j << "] = ";
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < nofRow; i++)
    {
        for (int j = 0; j < nofCol; j++)
        {
            cout << A[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < nofRow; i++)
    {
        for (int j = 0; j < nofCol; j++)
        {
            cout << B[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < nofRow; i++)
    {
        for (int j = 0; j < nofCol; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    cout << "value is" << endl;
    for (int i = 0; i < nofRow; i++)
    {
        for (int j = 0; j < nofCol; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}
