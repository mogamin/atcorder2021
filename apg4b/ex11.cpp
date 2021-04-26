#include <bits/stdc++.h>
using namespace std;

int main() {
  int a = 0, n = 0;

  cin >> n >> a;

  for (int i=0; i<n ; i++ ){
    int b = 0;
    string op = "";
    
    cin >> op >> b;
    
    if (op == "+") {
      a += b;
    }
    if (op == "-") {
      a -= b;
    }
    if (op == "*") {
      a *= b;
    }
    if (op == "/") {
      if (b == 0) {
        cout << "error" << endl;
        return -1;
      }
      a /= b;
    }
    cout << (i+1) << ":" << a << endl;
    
  }
  
}
