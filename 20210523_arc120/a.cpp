#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N;
  cin >> N;
  vector<long long> A(N);
  for (long long &x : A) {
    cin >> x;
  }

  for (long long i=1; i<=N ;i++) {
    vector<long long>::iterator it = max_element(A.begin(), A.end());
    long long index = distance(A.begin(), it);

    
    cout << A[index] << endl;
    cout << *it << endl;
    break;
  }

  return 0;
}


