#include <bits/stdc++.h>
using namespace std;
vector<int> countingsort(const vector<int> &A, int k)
{
    int n = A.size();
    vector<int> C(k + 1, 0);
    vector<int> B(n);

    // count frequency"""    
    for (int j = 0; j < n; j++) {
        C[A[j]] = C[A[j]] + 1;
    }

    // prefix sum
    for (int i = 1; i <= k; i++) {
        C[i] = C[i] + C[i - 1];
    }

    // build output array
    for (int j = n - 1; j >= 0; j--) {
        B[C[A[j]] - 1] = A[j];
        C[A[j]] = C[A[j]] - 1;
    }

    return B;
};
int main()
{
  int n, k;

  cout << "Enter number of elements: ";
  cin >> n;

  vector<int> A(n);

  cout << "Enter elements (range 0 to k):\n";
  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }

  cout << "Enter maximum value k: ";
  cin >> k;

  vector<int> B = countingsort(A, k);

  cout << "\nSorted array:\n";
  for (int x : B)
    cout << x << " ";
  return 0;
}
   
  
