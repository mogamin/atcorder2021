#include <bits/stdc++.h>
using namespace std;

int main() {
  int h,w;
  cin >> h >> w;
  
  vector<string> vHW(h);

  for(int i=0; i<h; i++) {
    string _v;
    cin >> _v;
    vHW.at(i) = _v;
  }

  for(int i=0; i<h; i++) {
    string v = vHW.at(i);
    for(int j=0 ; j<w; j++) {
      if (v.at(j) == '#') {
        cout << "#";
        continue;
      }

      int sum = 0;
      int _i, _j;
      for(int idelta=-1; idelta<2 ; idelta++) {
        for(int jdelta=-1; jdelta<2 ; jdelta++) {
          _i = i + idelta;
          _j = j + jdelta;
          if ((0<=_i) && (_i<h) && (0<=_j) && (_j<w)) {
            if (vHW.at(_i).at(_j) == '#') sum++;
          }
        }
      }
      cout << sum;
    }
    cout << endl;
  }
  
}

