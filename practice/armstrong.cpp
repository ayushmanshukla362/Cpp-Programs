#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n,originalNum,digits=0,sum=0;
    cin>>n;
    originalNum=n;
    int temp=n;
    while (temp>0){
        temp=temp/10;
        digits++;
    }
    
    
    return 0;
}