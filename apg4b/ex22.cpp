#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  pair<int, int> data;
  vector<pair<int, int>> list(N);

  for(int i=0; i<N; i++) {
    cin >> list.at(i).second >> list.at(i).first;
  }

  sort(list.begin(), list.end());
  
  for(auto d : list) {
    cout << d.second << " " << d.first << endl;
  }

  return 0;
}
