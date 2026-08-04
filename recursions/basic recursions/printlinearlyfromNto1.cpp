#include <bits/stdc++.h>
using namespace std;
void repeat(int i,int n){
    if (i>n)
    return;
    cout<<n;
    repeat(i,n-1);
}
int main(){
int n;
cin>>n;
repeat(1,n);
return 0;
}
 