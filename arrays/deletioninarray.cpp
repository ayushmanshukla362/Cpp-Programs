#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={3,1,2,5,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    // the element we have to delete
    int key=2;
    //search key in array
    for (int i=0;i<n;i++){
        if (arr[i]==key){
            //reduce size of array and move all
            // element one space towards left
            for (int j=i;j<n-1;j++)
                arr[j]=arr[j+1];
            n=n-1;
            break;
        }
    }
    for (int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}