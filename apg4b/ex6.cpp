#include <bits/stdc++.h>
using namespace std;

int main() {
  int a=0, b=0, result=0;
  string op = "na";

  cin >> a >> op >> b;
  
  if (op == "+") {
    result = a + b;
  }
  if (op == "-") {
    result = a - b;
  }
  if (op == "*") {
    result = a * b;
  }
  if (op == "/") {
    if (b == 0) {
      cout << "error" << endl;
      return 0;
    }
    result = a / b;
  }
  if ((op == "?") || (op == "=") || (op == "!")) {
    cout << "error" << endl;
      return 0;
  }

  cout << result << endl;
}
