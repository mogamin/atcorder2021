#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;

int count_land(vector<string> &map) {
  int count = 0;
  for(string &line : map) {
    for (char &c : line) {
      if (c == 'o') count++;
    }
  }
  return count;
}

bool is_concat_irand(int i,
                     int j,
                     vector<string> &map,
                     int count_original_land,
                     vector<string> &checked_map,
                     bool &is_first)
{
  if (!((-1<i)&&(i<10))) return false;
  if (!((-1<j)&&(j<10))) return false;
  char node = map.at(i).at(j);

  //cout << depth_to_s(depth) << " :i,j=(" << i << "," << j << ")='"<< node << "',is_first=" << is_first << endl;

  if (checked_map.at(i).at(j) == 'o') {
    return false;
  }

  if (node == 'o') {
    checked_map.at(i).at(j) = 'o';
    if (count_original_land == count_land(checked_map)) return true;
  } else {
    if (is_first) {
      is_first = false;
    } else {
      return false;
    }
  }

  if (is_concat_irand(i-1, j  ,   map, count_original_land, checked_map, is_first)) return true;
  if (is_concat_irand(i  , j-1,   map, count_original_land, checked_map, is_first)) return true;
  if (is_concat_irand(i  , j+1,   map, count_original_land, checked_map, is_first)) return true;
  if (is_concat_irand(i+1, j  ,   map, count_original_land, checked_map, is_first)) return true;

  return false;
}


int main() {
  vector<string> map;
  for(int i=0; i<10; i++) {
    string v;
    cin >> v;
    map.push_back(v);
  }

  int count_original_land = count_land(map);

  string clear_string = "..........";
  vector<string> checked_map(10, clear_string);
  bool is_first = true;
  for (int i=0; i<10 ; i++) {
    for (int j=0; j<10 ; j++) {
      checked_map = vector<string>(10, clear_string);
      is_first = true;
      if (map.at(i).at(j) == 'x') {
        if (is_concat_irand(i, j, map, count_original_land, checked_map, is_first)) {
          cout << "YES" << endl;
          return 0;
        }
      }
    }
  }
  cout << "NO" << endl;
}
