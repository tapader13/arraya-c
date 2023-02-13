#include <iostream>
using namespace std;
int main()
{
    int test[3][2];
    cout << "Enter value for array" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "A[" << i << "][" << j << "]=";
            cin >> test[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << test[i][j] << " ";
        }
        cout << endl;
    }
}
