#include <iostream>
using namespace std;
int main()
{

    int Arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << Arr[j];
        }
        cout << endl;
    }

    return 0;
}