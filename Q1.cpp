#include <iostream>
using namespace std;
int dectobi(int decnum){
    int ans = 0;
    int pow = 1;

    while(decnum > 0){
    int rem = decnum % 2;
        decnum = decnum / 2;

        ans+=(rem * pow);
        pow = pow*10;
    }

    return ans;
}

int main(){
    
    int num;
    cout<<"Decimal to Binary converter"<<endl;
    cout<<"enter any number in decimal number: ";
    cin>>num;

    cout<<dectobi(num)<<endl;

    return 0;
}