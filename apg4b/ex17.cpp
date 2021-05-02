#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, S;
  cin >> N >> S;
  vector<int> vA(N);
  vector<int> vP(N);

  for(int i=0; i<N ;i++) {
    cin >> vA.at(i);
  }
  for(int i=0; i<N ;i++) {
    cin >> vP.at(i);
  }

  int count = 0;
  for (int a_price : vA) {
    for (int p_price : vP) {
      if (a_price + p_price == S) {
        count++;
      }
    }
  }
  
  cout << count << endl;
}
