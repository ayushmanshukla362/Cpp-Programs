#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    char buf1[30], buf2[30];

    cout << "Enter first string: ";
    getline(cin, s1);
    cout << "Enter second string: ";
    getline(cin, s2);

    // safe copy to fixed-size buffers
    strncpy(buf1, s1.c_str(), sizeof(buf1) - 1);
    buf1[sizeof(buf1) - 1] = '\0';

    strncpy(buf2, s2.c_str(), sizeof(buf2) - 1);
    buf2[sizeof(buf2) - 1] = '\0';

    cout << "First:  " << buf1 << '\n';
    cout << "Second: " << buf2 << '\n';

    int cmp = strcmp(buf1, buf2);
    if (cmp == 0) {
        cout << "Strings are equal\n";
    } else if (cmp < 0) {
        cout << "First string is lexicographically smaller\n";
    } else {
        cout << "First string is lexicographically greater\n";
    }

    return 0;
}