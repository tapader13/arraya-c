#include <iostream>
using namespace std;
int main()
{
    int number, array1[30], array2[35];
    cout << "Enter value for array1";
    cin >> number;
    for (int i = 0; i < number; i++)
    {
        cin >> array1[i];
    }
    cout << "array1 is";
    for (int i = 0; i < number; i++)
    {
        cout << array1[i] << " ";
    }
    for (int i = 0; i < number; i++)
    {
        array2[i] = array1[i];
    }
    cout << endl;
    cout << "array2 is";
    for (int i = 0; i < number; i++)
    {
        cout << array2[i] << " ";
    }
}
