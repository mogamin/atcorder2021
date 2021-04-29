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
      _i = i-1; _j = j-1;
      cout << _i << ":" << _j << endl;
      if ((0<_i) && (_i<h) && (0<_j) && (_j<w)) {
        cout << "in" << endl;
        if (vHW.at(_i).at(_j) == '#') sum++;
      }
      _i = i-1; _j = j;
      cout << _i << ":" << _j << endl;
      if ((0<_i) && (_i<h) && (0<_j) && (_j<w)) {
        cout << "in" << endl;
        if (vHW.at(_i).at(_j) == '#') sum++;
      }
      _i = i-1; _j = j+1;
      cout << _i << ":" << _j << endl;
      if ((0<_i) && (_i<h) && (0<_j) && (_j<w)) {
        cout << "in" << endl;
        if (vHW.at(_i).at(_j) == '#') sum++;
      }
      _i = i; _j = j-1;
      cout << _i << ":" << _j << endl;
      if ((0<_i) && (_i<h) && (0<_j) && (_j<w)) {
        cout << "in" << endl;
        if (vHW.at(_i).at(_j) == '#') sum++;
      }
      _i = i; _j = j+1;
      cout << _i << ":" << _j << endl;
      if ((0<_i) && (_i<h) && (0<_j) && (_j<w)) {
        cout << "in" << endl;
        if (vHW.at(_i).at(_j) == '#') sum++;
      }
      _i = i+1; _j = j-1;
      cout << _i << ":" << _j << endl;
      if ((0<_i) && (_i<h) && (0<_j) && (_j<w)) {
        cout << "in" << endl;
        if (vHW.at(_i).at(_j) == '#') sum++;
      }
      _i = i+1; _j = j;
      cout << _i << ":" << _j << endl;
      if ((0<_i) && (_i<h) && (0<_j) && (_j<w)) {
        cout << "in" << endl;
        if (vHW.at(_i).at(_j) == '#') sum++;
      }
      _i = i+1; _j = j+1;
      cout << _i << ":" << _j << endl;
      if ((0<_i) && (_i<h) && (0<_j) && (_j<w)) {
        cout << "in" << endl;
        if (vHW.at(_i).at(_j) == '#') sum++;
      }
      cout << sum;
      
    }
    cout << endl;
  }
  
}

