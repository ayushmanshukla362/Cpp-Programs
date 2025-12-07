#include <iostream>
using namespace std;
int largest (int a,int b,int c){
    if (a>=b && a>=c)
    return a;
    if (b>=c && b>=a)
    return b;
    else
    return c;
}

int main() {
    int x,y,z;
    cin>>x>>y>>z;
    int ans=largest (x,y,z);
    cout<<"largest ="<<ans;
    
    return 0;
}