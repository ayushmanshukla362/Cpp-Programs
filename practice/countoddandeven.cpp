#include <iostream>
using namespace std;

int main() {
    int n,even=0,odd=0;
    cout<<"enter the number of array elements ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if (arr[i]%2==0)
            even++;
            else
            odd++;
        }
        cout<<even<<"  "<<odd;
    return 0;
}