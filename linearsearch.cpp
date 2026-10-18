#include <iostream>
using namespace std;

int main()
{

    int size;
    int elmt;
    int target;
    int k = 0;
    int j = 0;

    cout << "Enter the size of an array: ";
    cin >> size;

    int Arr[size];
    cout << "members: "<<endl;

    for (int i = 0; i < size; i++)
    {
        k++;

        cout << "member [" << k << "]: ";
        cin >> Arr[i];
    }

    cout << "Which Integer you want to find:";
    cin >> target;

    for (int i = 0; i < size; i++)
    {
        if (Arr[i] == target)
        {
            j++;
            cout << "Found at " << i + 1 << "th position!" << endl;
        }
    }

    if (k == 0)
    {
        cout << "Not found!" << endl;
    }

    return 0;
}