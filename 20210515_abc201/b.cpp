#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  vector<int> T(N);
  vector<int> _T(N);
  for(int i=0; i<N ;i++) {
    cin >> S.at(i);
    cin >> T.at(i);
  }

  for(int i=0; i<N ;i++) {
    _T.at(i) = T.at(i);
  }

  sort(T.begin(), T.end());
  
  int second_height = T.at(T.size()-2);
  
  for(int i=0; i<(int)_T.size() ;i++) {
    if (_T.at(i) == second_height) {
      cout << S.at(i) << endl;
      return 0;
    }
  }
  
}
