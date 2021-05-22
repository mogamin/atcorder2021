#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int A,B,K;
  cin >> A >> B >> K;

  string s = "";
  for (int i=0; i<A ; i++) {
    s += "a";
  }
  for (int i=0; i<B ; i++) {
    s += "b";
  }

  cout << s.at(K-1) << endl;

}
