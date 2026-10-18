#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of the Array: ";
    cin >> size;

    if (size <= 0)
    {
        cout << "Invalid array size!" << endl;
        return 0;
    }

    int arr[size];

    cout << "Enter the members of Array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Member[" << i << "] : ";
        cin >> arr[i];
    }
    cout << "Before reverse: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }

    cout << endl;

    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }

    cout << "After reverse: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }

    return 0;
}