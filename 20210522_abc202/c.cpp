#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<pair<int, int>> A(N);
  vector<pair<int, int>> B(N);
  vector<pair<int, int>> C(N);
  map<int, int> A_map;
  map<int, int> B_map;
  
  for(int i=0; i<N ; i++) {
    int x;
    cin >> x;;
    A.at(i) = make_pair(x, i);

    if (A_map.count(x)) {
      A_map[x] += 1;
    } else {
      A_map[x] = 1;
    }
  }
  for(int i=0; i<N ; i++) {
    int x;
    cin >> x;;
    B.at(i) = make_pair(x, i);

    if (B_map.count(x)) {
      B_map[x] += 1;
    } else {
      B_map[x] = 1;
    }
  }
  for(int i=0; i<N ; i++) {
    int x;
    cin >> x;;
    C.at(i) = make_pair(x, i);
  }

  //int count = 0;
  vector<pair<int, int>> BB;
  for (auto _a : A_map) {
    for (auto _b : B_map) {
      if (_a.first == _b.first) {
        cout << "a=" << _a.first << ", b=" << _b.first << endl;
        BB.push_back(make_pair(_b.first, _b.second));
      }
    }
  }

  //int count = 0;
  vector<int> b_indexes;
  for (auto _b : BB) {
    for(int i=0; i<N ; i++) {
      if (_b.first == B.at(i).first) {
        b_indexes.push_back(i);
        cout << i << endl;
      }
    }
  }

  cout << "--:1" << endl;

  int count = 0;
  for (int &b_index : b_indexes) {
    int _count = 0;
    for (int i=0; i<N ;i++) {
      if (b_index == (C.at(i).first-1) ) {
        cout << "b_index=" << b_index << ", C.at(" << i << ")=" << C.at(i).first << endl;
        _count++;
      }
    }

    int _a_count = 0;
    for (auto _a : A) {
      if (_a.first == B.at(b_index).first) {
        _a_count++;
      }
    }
    // cout << "_a_count=" << _a_count << endl;
    count = count + _count * _a_count;
    cout << "count=" << count << endl;
    
  }
  cout << "--:2" << endl;

  /*
  int count = 0;
  for (int i=1; i<=N ;i++) {
    for (int j=1; j<=N ;j++) {
      if (A.at(i-1) == B.at(C.at(j-1)-1)) {
        cout << "i,j=" << i << "," << j  << ", A.at(i-1)=" << A.at(i-1) << ", C.at(j-1)=" << C.at(j-1);
        cout << ", B.at(" << C.at(j-1)-1 << ")=" << B.at(C.at(j-1)-1) << endl;
        count++;
      }
    }
  }
  */

  /*
  sort(A.begin(), A.end());
  sort(B.begin(), B.end());

  vector<pair<int, int>> AB;
  int count = 0;
  int jj=0;
  for (int i=0; i<N ; i++) {
    bool isFind = false;
    for (int j=jj; j<N ; j++) {
      if (A.at(i) == B.at(j)) {
        AB.push_back(make_pair(i, j));
        isFind = true;
      } else {
        if (isFind) {
          break;
          jj = j
        }
      }
      
    }
  }
  */

  cout << count << endl;
  
}
