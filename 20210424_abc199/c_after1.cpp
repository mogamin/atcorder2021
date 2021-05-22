#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;
  int Q;
  cin >> Q;

  vector<int> T(Q);
  vector<int> A(Q);
  vector<int> B(Q);
  for (int i=0; i<Q ; i++) {
    cin >> T.at(i) >> A.at(i) >> B.at(i);
  }

  for (int i=0; i<Q ; i++) {
    if (T.at(i) == 1) {
      swap(S.at(A.at(i)-1), S.at(B.at(i)-1));
    }
    if (T.at(i) == 2) {
      S = S.substr(N, N) + S.substr(0, N);
    }
  }

  cout << S << endl;
  
}
