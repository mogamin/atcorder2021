#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  long long L_first  = 2;
  long long L_second = 1;
  
  if (N == 0) {
    cout << L_first << endl;
    return 0;
  }
  if (N == 1) {
    cout << L_second << endl;
    return 0;
  }

  long long r = 0;
  for(int i=2; i<=N ;i++) {
    r = L_second + L_first;
    L_first = L_second;
    L_second = r;
  }

  cout << r << endl;
  
}
