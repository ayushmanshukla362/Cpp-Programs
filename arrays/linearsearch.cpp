#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, num, pos = 0, flag = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> num;
    for (int i = 0; i < n; i++) {
        if (a[i] == num) {
            flag = 1;   // flag is just used to tell that array element has been found
            pos = i + 1;
            break;      // break stops the loop immediately after finding the element
        }
    }
    if (flag == 0)
        cout << "element not found";
    else
        cout << "element is found at " << pos;
    return 0;
}