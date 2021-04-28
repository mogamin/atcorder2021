#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int result = 1;
  for(int i=1; i<s.size();) {
    if (s.at(i) == '+') {
      result += 1;
    }
    if (s.at(i) == '-') {
      result -= 1;
    }
    i += 2;
  }

  cout << result << endl;
  
}
