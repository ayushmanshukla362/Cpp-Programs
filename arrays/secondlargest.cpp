#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n], sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int max=a[0];
    for (int i = 0;i<n;i++) {
        if (a[i]>max){
            max=a[i];
        }
    }

    int largest=max;
    for (int i=0;i<n;i++) {
        if (a[i]<largest);
    }
    cout <<"the max is"<<max;
    return 0;
}