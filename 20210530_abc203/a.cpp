#include <bits/stdc++.h>
using namespace std;

int main() {
  int a,b,c;
  cin >> a >> b >> c;

  if (a == b) {
    cout << c << endl;
    return 0;
  }
  if (b == c) {
    cout << a << endl;
    return 0;
  }
  if (c == a) {
    cout << b << endl;
    return 0;
  }
  cout << 0 << endl;
  return 0;
  
}
