#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 0;
  vector<int> cards;

  cin >> n;
  for(int i=0; i<n ; i++) {
    int v;
    cin >> v;
    cards.push_back(v);
  }

  int alice = 0;
  int bob = 0;
  bool turn_alice = true;
  for(int i=0; i<n ; i++) {

    // calc max value;
    int max_v = 0;
    int max_v_index = -1;
    for (int j=0; j<(int)cards.size() ; j++) {
      int v = cards.at(j);
      if (v > max_v) {
        max_v = v;
        max_v_index = j;
      }
    }

    if (turn_alice) {
      alice += max_v;
      turn_alice = false;
    } else {
      bob += max_v;
      turn_alice = true;
    }
    cards.erase(cards.begin() + max_v_index);
    
  }

  cout << alice - bob << endl;
  
  
}
