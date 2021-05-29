#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  map<int, int> A;

  int max_k = -1;
  int max_v = -1;
  for (int i=0; i<N ;i++) {
    int x;
    cin >> x;

    if (A.count(x)) {
      A[x] += 1;
    } else {
      A[x] = 1;
    }

    if ( A[x] > max_v ) {
      max_k = x;
      max_v = A[x];
    }
  }

  cout << max_k << " " << A[max_k] << endl;
  
}
