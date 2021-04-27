#include <bits/stdc++.h>
using namespace std;

int main() {
  int n=0, k=0;
  int distance = 0;
  cin >> n >> k;

  while ( n > 0 ) {
    int x = 0;
    cin >> x;

    int _da = x;
    int _db = abs(x-k);
    
    if (_da < _db) {
      distance += 2 * _da;
    } else {
      distance += 2 * _db;
    }
    n--;
  }

  cout << distance << endl;
  
}
