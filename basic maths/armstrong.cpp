#include <bits/stdc++.h>
using namespace std;

// Function to count the number of digits
int countDigits(int n) {
    int count = 0;

    while (n > 0) {
        count++;
        n = n / 10;
    }

    return count;
}

// Function to check Armstrong Number
bool armstrong(int n) {
    int original = n;             // Store original number
    int digits = countDigits(n);  // Total number of digits
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;               // Extract last digit
        sum = sum + pow(digit, digits);   // Add digit^digits
        n = n / 10;                       // Remove last digit
    }

    return sum == original;
}

int main() {
    int num;
    cin >> num;

    if (armstrong(num))
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}