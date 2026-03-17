#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,i,j;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    for(i = 0; i < n; i++){
        cin >> arr[i];
    }
//starts from 1 bcos first element is already considered sorted
    for (i=1;i<n;i++){ 
//key=element we want to place correctly
        int key=arr[i];
//start checking elements to the left of the key       
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
         }
    return 0;
}