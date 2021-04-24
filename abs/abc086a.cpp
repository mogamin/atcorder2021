#include <bits/stdc++.h>
using namespace std;

int main() {
  int a=0, b=0;
  int c=0;
  string result = "";

  cin >> a >> b;

  c = a * b;
  if ((c%2) == 0) {
    result = "Even";
  } else {
    result = "Odd";
  }

  cout << result << endl;
  
}
