#include <iostream>
using namespace std;

int main() {
    int n=4;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
        /* so that once the inner loop is done
        it shows its output in the next line and 
        then goes to thee outer loop to do the
        whole process again*/
    }
    return 0;
}