#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 0;
  cin >> n;

  string s = "";
  char c1 = "";
  char c2 = "";
  string sx = "";
  cin >> s;

  int q = 0;
  cin >> q;

  vector<int> T(q);
  vector<int> A(q);
  vector<int> B(q);

  for (int i = 0; i < q; i++) {
    cin >> T.at(i) >> A.at(i) >> B.at(i);
  }

  for (int i = 0; i < q; i++) {
    if (T.at(i) == 1) {
      sx = "";
      c1 = s[A.at(i)];
      c2 = s[B.at(i)];
      for (k=0; k<n+1; k++) {
        // TIMEUP...
        sx = s[k];
      }
    }
    if (T.at(i) == 2) {
      s = s.substr(n, n) + s.substr(0, n);
    }
  }

  cout << s << endl;
    
}
