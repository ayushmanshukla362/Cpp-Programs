#include <iostream>
using namespace std;

int main() {
    int n=4;
    for (int i=0;i<n;i++){
//so there will be 3 loops first which prints spaces 
//2nd which gives num and 3rd which gives the 2nd set of numbers     
    for (int j=0;j<n-i-1;j++){
        cout<<" ";
    }
    for (int j=1;j<=i+1;j++){
        cout<<j;
    }
    for (int j=i;j>= 1;j--){
        cout<<j;
    }
    cout<<endl;
    }
    return 0;
}