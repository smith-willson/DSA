#include <iostream>
using namespace std;
int main()
{
    int size;
    int smallestindex = 0;
    int Largestindex = 0;
    cout << "What is the size of Array: ";
    cin >> size;

    int num1[size];

    cout << "Enter the element of array: "<<endl;

    for (int i = 0; i < size; i++)
    {
        cout << "num1[" << i << "] = ";
        cin >> num1[i];
    }

    int small = num1[0];
    int large = num1[0];

    for (int j = 1; j < size; j++)
    {
        if (num1[j] < small)
        {
            small = num1[j];
            smallestindex = j;
        }
        if (num1[j] > large)
        {
            large = num1[j];
            Largestindex = j;
        }
    }
    cout << "largest = " << Largestindex << endl;
    cout << "smallest = " << smallestindex << endl;

    return 0;
}