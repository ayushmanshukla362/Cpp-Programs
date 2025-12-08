#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cin >> num;

    int temp = num;
    int digits = 0;

    // count digits
    int t = num;
    while (t > 0) {
        digits++;
        t /= 10;
    }

    int sum = 0;

    // calculate sum of digits^digits
    while (temp > 0) {
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }

    if (sum == num)
        cout << "Yes";
    else
        cout << "Not";

    return 0;
}
