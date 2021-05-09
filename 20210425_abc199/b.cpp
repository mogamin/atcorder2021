#include <bits/stdc++.h>
using namespace std;

int main() {
  int n=0;
  int a=0, b=0;

  cin >> n;
  vector<int> A(n);
  vector<int> B(n);

  for (int i = 0; i < n; i++) {
    cin >> A.at(i);
  }
  for (int i = 0; i < n; i++) {
    cin >> B.at(i);
  }

  map<int, int> result;

  for (int j = 1; j<1000+1; j++) {
    int ok = 0;
    
    for (int i = 0; i < n; i++) {
      a = A.at(i);
      b = B.at(i);
      if ((a <= j) && (j <= b) ) {
        //cout << j << endl;
        ok = ok + 1;
      }
    }
    if (ok == n)  {
      result[j] = 1;
    }
  }
  
  cout << result.size() << endl;
}
