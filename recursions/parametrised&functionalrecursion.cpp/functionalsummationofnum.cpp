#include <bits/stdc++.h>
using namespace std;
int summation ( int i){
    if (i==0)
    return 0;
    return i+summation(i-1);
}
int main(){
    int n;
    cin>>n;
    cout<<summation(n);
    return 0;
}