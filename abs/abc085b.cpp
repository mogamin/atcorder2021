#include <bits/stdc++.h>
using namespace std;

int main() {
  int n=0;
  vector<int> v;
  cin >> n;

  for(int i=0; i<n ; i++) {
    int d = 0;
    cin >> d;
    v.push_back(d);
  }

  int count = 0;
  while(true) {

    int max_d = 0;
    for(int i=0; i<(int)v.size() ; i++) {
      if (max_d < v.at(i)) {
        max_d = v.at(i);
      }
    }
    count++;

    vector<int> _v;
    for(int i=0; i<(int)v.size() ; i++) {
      if (max_d > v.at(i)) {
        _v.push_back(v.at(i));
      }
    }
    if (_v.size() == 0) {
      break;
    } else {
      v = _v;
    }
  }
  cout << count << endl;
}
