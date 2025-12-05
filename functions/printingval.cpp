#include <iostream>
using namespace std;

int printHello() {
    cout << "hello\n";
    return 3;
}

int main() {
    int val = printHello();
    cout << "val=" << val << endl;
    return 0;  
}
