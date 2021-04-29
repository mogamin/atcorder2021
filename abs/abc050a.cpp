#include <bits/stdc++.h>
using namespace std;

int main() {
  int a,b;
  string op;
  cin >> a >> op >> b;

  int result;
  if (op == "+") {
    result = a + b;
  }
  if (op == "-") {
    result = a - b;
  }
  cout << result << endl;
}
