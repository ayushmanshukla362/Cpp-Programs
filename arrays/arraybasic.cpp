#include <iostream>
using namespace std;

int main() {
    int marks [5]={99,100,54,36,88};
    marks [0]=101; // is being treated as a single variable separately
    cout<<marks[0]<<endl;
     cout<<marks[0]<<endl;
      cout<<marks[0]<<endl;
       cout<<marks[0]<<endl;
        cout<<marks[0]<<endl;
    return 0;
}