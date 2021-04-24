#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 0;
  cin >> n;

  string n_str;
  n_str = to_string(n);

  if (
      ((n_str[0] == n_str[1]) && (n_str[0] == n_str[2])) ||
      ((n_str[1] == n_str[2]) && (n_str[1] == n_str[3]))
  ) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

}
