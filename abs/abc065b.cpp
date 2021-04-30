#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> vlist;
  for (int i=0; i<n ;i++) {
    int a;
    cin >> a;
    vlist.push_back(a);
  }

  int count = 0;
  int index = 1;
  bool got2 = false;
  for (int i=0; i<n ; i++) {
    count++;
    index= vlist.at(index-1);
    if (index == 2) {
      got2 = true;
      break;
    }
  }

  if (got2) {
    cout << count << endl;
  } else {
    cout << -1 << endl;
  }
}
