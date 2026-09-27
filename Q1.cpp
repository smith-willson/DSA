#include <iostream>
using namespace std;

int main(){
    int num;
    int ans = 0;
    int rem;
    int pow = 1;
    cout<<"Decimal to Binary converter"<<endl;
    cout<<"enter any number in decimal number: ";
    cin>>num;

    while(num > 0){
        rem = num % 2;
        num = num / 2;

        ans+=(rem * pow);
        pow = pow*10;
    }

    cout<<"The Value in binary is :";
    cout<<ans<<endl;


    return 0;
}