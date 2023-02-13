#include <iostream>
using namespace std;
int main()
{
    int A[10][10], row, col, transpose[10][10];
    cout << "Enter value for row and col : ";
    cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transpose[j][i] = A[i][j];
        }
    }
    cout << "Result is =" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Transpose is =" << endl;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
}