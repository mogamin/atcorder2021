#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  reverse(S.begin(), S.end());

  for (int i=0; i<(int)S.size() ;i++) {
    if (S.at(i) == '6') {
      S.at(i) = '9';
    } else if (S.at(i) == '9') {
      S.at(i) = '6';
    }
  }

  cout << S << endl;
}
