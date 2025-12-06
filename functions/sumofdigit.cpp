#include <iostream>
using namespace std;
int sumofdigits(int num){
    int digSum=0;
    while (num>0){
        int lastDig=num%10;
        num/=10;
        digSum+=lastDig;
    }
    return digSum;
}

int main() {
    cout<<"sum= "<<sumofdigits(2321)<<endl;
    return 0;
}