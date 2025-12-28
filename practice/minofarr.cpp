#include <iostream>
using namespace std;

int main() {
    int n;
     cout<<"enter the number of array elements ";
    cin>>n;
    int arr[n];
    cout<< "enter the elements of the array ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min= arr[0];
    for (int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"the smallest element of the array is "<<min;
    return 0;
}