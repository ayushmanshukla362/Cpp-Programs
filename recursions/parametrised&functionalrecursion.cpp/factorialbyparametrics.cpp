#include <bits/stdc++.h>
using namespace std;

void factorial(int n, int product)
{
    if (n == 0)
    {
        cout << product;
        return;
    }

    factorial(n - 1, product * n);
}

int main()
{
    int n;
    cin >> n;

    factorial(n, 1);

    return 0;
}