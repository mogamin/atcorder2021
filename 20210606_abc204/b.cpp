#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);

  for(int &x : A){
    cin >> x;
  }

  int sum = 0;
  for(int &x : A){
    if (x<=10) {
      continue;
    } else {
      sum += x - 10;
    }
  }

  cout << sum << endl;
  
}
