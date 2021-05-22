#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  vector<pair<string, int>> list(N);
  vector<int> point_pointers(101);
  for(int i=0; i<N; i++) {
    string s;
    int points;
    cin >> s >> points;
    list.at(i) = make_pair(s, 100 - points);
    point_pointers.at(points) = i;
  }
  sort(list.begin(), list.end());
  for(auto res : list) {
    //cout << res.first << ":" << res.second << "=" << point_pointers.at(100 - res.second) + 1 << endl;
    cout << point_pointers.at(100 - res.second) + 1 << endl;
  }
  
}
