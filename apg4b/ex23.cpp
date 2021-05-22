#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<long long> A(N);
  for(int i=0; i<N ; i++) {
    cin >> A.at(i);
  }

  int max_count = 0;
  int max_value = 0;
  map<long long, int> data_map;
  for(int i=0; i<N ; i++) {
    long long v = A.at(i);
    if (data_map.count(v)) {
      data_map.at(v) +=  1;
    } else {
      data_map[v]  =  1;
    }
    if (max_count < data_map[v]) {
      max_count = data_map[v];
      max_value = v;
    }
  }

  cout << max_value << " " << data_map.at(max_value) << endl;
  
}



