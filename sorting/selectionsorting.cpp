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

    for(i = 0; i < n-1; i++){
        int min = i;

        for(j = i+1; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    for(i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}