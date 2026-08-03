#include<bits/stdc++.h>
using namespace std;
int reverse(int n){
    if (n==0)
    return 0;
    int reversenumber=0;
   while (n>0){
    int digit=n%10;
    reversenumber=reversenumber*10+digit;
    n=n/10;
   }
    return reversenumber;

}
    int main(){
        int num;
        cin>>num;
        cout<<reverse(num);
        return 0;
    }