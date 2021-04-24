#include <bits/stdc++.h>
using namespace std;

int main() {
  int a=0, b=0, c=0;
  cin >> a >> b >> c;
  
  if ((a*a + b*b) < c*c) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
