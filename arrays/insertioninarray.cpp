#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout <<"Enter the size of aarray: ";
    cin >> n;
    int arr[n];
    cout <<"Enter the elements of array: ";
    for(int i=0; i<(n-1); i++){
        cin >> arr[i];
    }
    int element;
    cout <<"Enter the element to be inserted: ";
    cin >> element;
    int pos;
    cout <<"Enter the position where element is to be inserted: ";
    cin >> pos;
    for(int i=(n-1); i>=pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = element;
    cout <<"The array after insertion is: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
   
}