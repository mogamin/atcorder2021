#include <bits/stdc++.h>
using namespace std;

bool has_index(vector<int> v, int i) {
  for (int value : v) {
    if (value == i) {
      return true;
    }
  }
  return false;
}

int main() {
  int H,W;
  cin >> H >> W;
  vector<vector<char>> data(H, vector<char>(W));
  for(int i=0; i<H ;i++) {
    for(int j=0; j<W ;j++) {
      cin >> data.at(i).at(j);
    }
  }

  vector<int> remove_h_indexes;
  vector<int> remove_w_indexes;

  // searching
  for(int i=0; i<H ;i++){
    bool exists_hash = false;
    for(int j=0; j<W ; j++) {
      if (data.at(i).at(j) == '#') {
        exists_hash = true;
        break;
      }
    }
    if (!exists_hash) {
      remove_h_indexes.push_back(i);
    }
  }
  
  // searching
  for(int i=0; i<W ;i++){
    bool exists_hash = false;
    for(int j=0; j<H ; j++) {
      if (data.at(j).at(i) == '#') {
        exists_hash = true;
        break;
      }
    }
    if (!exists_hash) {
      remove_w_indexes.push_back(i);
    }
  }

  // re-construction
  vector<vector<char>> data2;
  for(int i=0; i<H ; i++){
    if (has_index(remove_h_indexes, i)) {
      continue;
    }
    vector<char> _w;
    _w.clear();
    for(int j=0; j<W ; j++){
      if (has_index(remove_w_indexes, j)) {
        continue;
      }
      _w.push_back(data.at(i).at(j));
    }
    data2.push_back(_w);
  }

  // output
  for (int i=0; i<(int)data2.size(); i++) {
    for (int j=0; j<(int)data2.at(i).size(); j++) {
      if (j==(int)data2.at(i).size()-1) {
        cout << data2.at(i).at(j) << endl;
      } else {
        cout << data2.at(i).at(j);
      }
    }
  }
  
}
