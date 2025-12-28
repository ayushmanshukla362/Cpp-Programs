#include <iostream>
using namespace std;

int main() {
    int n,sum=0;
    cout<<"enter number of elements in array ";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"the sum is 3"<<sum;
    return 0;
}