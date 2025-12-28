#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the number of array elements ";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for (int i=1;i<n;i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"the maximum element is "<<max;
    return 0;
}