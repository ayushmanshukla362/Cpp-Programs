#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int a[n];
    cout<<"enter the array element"; 
    for ( i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"the elements of an array are";
    for (i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}