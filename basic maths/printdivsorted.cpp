#include <bits/stdc++.h>
using namespace std;

void divisors(int n) {
    vector<int> divisorsList;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisorsList.push_back(i);

            if (i != n / i)
                divisorsList.push_back(n / i);
        }
    }

    sort(divisorsList.begin(), divisorsList.end());

    for (int x : divisorsList) {
        cout << x << " ";
    }
}

int main() {
    int n;
    cin >> n;

    divisors(n);

    return 0;
}