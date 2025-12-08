#include <iostream>
using namespace std;

int main() {
    int a,b,choice;
    cin>>a>>b>>choice;
    switch (choice){
        case 1:
        cout<<a+b;
        break;
        case 2:
        cout<<a-b;
        break;
        case 3:
        cout<<a*b;
        break;
        case 4:
        if (b!=0) cout<<a/b;
        break;
    }
    return 0;
}