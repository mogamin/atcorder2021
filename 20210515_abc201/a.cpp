#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v(3);
  cin >> v.at(0) >> v.at(1) >> v.at(2);

  sort(v.begin(), v.end());

  int a = v.at(2) - v.at(1);
  int b = v.at(1) - v.at(0);
  if (a == b) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  
}
