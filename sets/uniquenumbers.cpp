#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int a[n];
    for (int i= 0 ; i<n ; i++){
        cin >> a[i];
    }
    set < int> s;

    for (int i = 0 ; i<n; i++){
        s.insert(a[i]);
    }

    for (int x : s){
        cout << x << " ";
    }
    int count=0;
    for (int x : s ){
        count++;
    }
    cout << "Total number of unique elements: ";
    cout << count;
}