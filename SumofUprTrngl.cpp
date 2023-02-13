#include <iostream>
using namespace std;
int main()
{
    int A[10][10], sum = 0, nofCol, nofRow;
    cout << "Enter value for A : ";
    cin >> nofRow >> nofCol;
    for (int i = 0; i < nofRow; i++)
    {
        for (int j = 0; j < nofCol; j++)
        {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
    }
    cout << "Value is : " << endl;
    for (int i = 0; i < nofRow; i++)
    {
        for (int j = 0; j < nofCol; j++)
        {

            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < nofRow; i++)
    {
        for (int j = 0; j < nofCol; j++)
        {

            if (i < j)
            {
                sum = sum + A[i][j];
            }
        }
        cout << endl;
    }
    cout << "Sum of upper triangle is : " << sum;
}