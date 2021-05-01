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

  int count = 0;
  int max_d = 101;
  for(int i=0; i<n ; i++) {
    if (max_d > v.at(i)) {
      max_d = v.at(i);
      count++;
    }
  }

  cout << count << endl;
}
