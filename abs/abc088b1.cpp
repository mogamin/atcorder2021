#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);

  for(int i=0; i<n ; i++) {
    cin >> v.at(i);
  }

  sort(v.begin(), v.end());
  reverse(v.begin(), v.end());

  int alice = 0;
  int bob = 0;
  for(int i=0; i<n ; i++) {
    if (i%2 == 0) {
      alice += v.at(i);
    } else {
      bob += v.at(i);
    }
  }

  cout << alice - bob << endl;
  
}
