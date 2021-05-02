#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> data(5);
  for(int i=0;i<5;i++) {
    cin >> data.at(i);
  }

  bool is_same = false;
  int prev_value = -1;
  for (int x : data) {
    if (prev_value == x){
      is_same = true;
      break;
    }
    prev_value = x;
  }

  if (is_same) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
