#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 0,k = 0;
  int result =  1;
  cin >> n >> k;

  while( n > 0) {
    int _r2 = result * 2;
    int _rk = result + k;
    
    if (_r2 < _rk) {
      result = _r2;
    } else {
      result = _rk;
    }
    n -=1;
  }

  cout << result << endl;
  
}
