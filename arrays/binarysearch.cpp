#include<bits/stdc++.h>
using namespace std;
int main(){
    int i, n, num, pos=0, flag=0;
    cout << "Enter the size of the array: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements of the array: ";
    for (i=0;i<n;i++){
        cin >> a[i];
    }
    cout << "Enter the number to be searched: ";
    cin >> num;
    int beg=0, end=n-1;
    while (beg<=end){ //to search in the range of an array from pos 0 to last
        int mid=(beg+end)/2; //used to find the middle of the current search range

        //Binary search conceptually splits into two parts: left and right wrt mid
        
        if (a[mid]==num){
            flag=1;
            pos=mid+1;
            break;
        }
        else if (a[mid]<num){
            beg=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    if (flag==0){
        cout << "The number is not found in the array." << endl;
    }
    else{
        cout << "The number " << num << " is found at position " << pos << "." << endl;
    }
    return 0;
}