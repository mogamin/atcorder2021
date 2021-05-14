#include <bits/stdc++.h>
using namespace std;

int move(vector<string> &map, int pos_x, int pos_y){
  if((int)map.size() <= pos_y)       return -1;
  if(0 > pos_y)                      return -1;
  
  if((int)map.at(0).size() <= pos_x) return -1;
  if(0 > pos_x)                      return -1;

  char node = map.at(pos_y).at(pos_x);
  
  if (node == '#'){
    return -1;
  }
  if (node == 'g') {
    return 0;
  }
  map.at(pos_y).at(pos_x) = '#';


  int ret = -999;
  ret = move(map, pos_x +1, pos_y    );
  if (ret == 0) return 0;

  ret = move(map, pos_x   , pos_y + 1);
  if (ret == 0) return 0;

  ret = move(map, pos_x   , pos_y - 1);
  if (ret == 0) return 0;

  ret = move(map, pos_x -1, pos_y    );
  if (ret == 0) return 0;

  return -1;
}


int main() {
  int H,W;
  cin >> H >> W;
  vector<string> map(H);
  for(string &line : map) {
    cin >> line;
  }

  int start_x = -1;
  int start_y = 0;
  for(string &line : map) {
    start_x = line.find("s");
    if (start_x>=0) {
      break;
    }
    start_y++;
  }
  //cout << "x,y=" << start_x << "," << start_y << endl;


  /*
  clear_line = '';
  for (int i=0; i<W; i++) clear_line += '.';
  vector<string> checked_map(H, clear_line);
  */

  int ret = 0;
  ret = move(map, start_x, start_y);
  if (ret == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  
}
