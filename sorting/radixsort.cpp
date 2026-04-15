#include <bits/stdc++.h>
using namespace std;

// Function to get maximum element
int getMax(vector<int>& arr) {
    return *max_element(arr.begin(), arr.end());
}

// Counting sort based on digit (exp = 1, 10, 100...)
void countingSort(vector<int>& arr, int exp) {
    int n = arr.size();
    vector<int> output(n);
    int count[10] = {0};

    // Count occurrences of digits
    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    // Convert count to prefix sum
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Build output array (right to left for stability)
    for (int i = n - 1; i >= 0; i--) {
        int digit = (arr[i] / exp) % 10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }

    // Copy back
    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

// Radix Sort function
void radixSort(vector<int>& arr) {
    int maxVal = getMax(arr);

    for (int exp = 1; maxVal / exp > 0; exp *= 10)
        countingSort(arr, exp);
}

// Main
int main() {
    vector<int> arr = {170, 45, 75, 90, 802, 24, 2, 66};

    radixSort(arr);

    for (int x : arr)
        cout << x << " ";

    return 0;
}