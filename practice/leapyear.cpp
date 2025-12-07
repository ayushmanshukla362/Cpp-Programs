#include <iostream>
using namespace std;
int leapyear (int x){
    if (x%4==0){
        cout<<"leap year";
    }
    else{
        cout<<"not a leap year";
    }
}

int main() {
    int year;
    cout<<" enter year";
    cin>>year;
    leapyear (year);
    return 0;
}