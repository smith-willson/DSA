#include <iostream>
using namespace std;

int bitodec(int binum)
{
    int ans = 0;
    int pow = 1;

    while (binum > 0)
    {
        int rem = binum % 10;
        ans = ans + rem * pow; 
        binum = binum / 10;
        pow = pow * 2;
    }

    return ans;
}
int main()
{

    int num;
    cout << "Enter any binary number: ";
    cin >> num;

    cout << "The Decimal form is: " << bitodec(num) << endl;

    return 0;
}