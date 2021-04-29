#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,m;
  cin >> n >> m;

  vector<int> v(n);
  for(int i=0; i<m ;i++) {
    int fr, to;
    cin >> fr >> to;
    v.at(fr-1)++; 
    v.at(to-1)++; 
  }
  
  for(int i=0; i<n ;i++) {
    cout << v.at(i) << endl;
  }
  
}
