#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int count = 0;
  for(int i=0; i<(int)s.size(); i++) {
    if (i+4 > (int)s.size()) {
      break;
    }
    if (s.at(i+0) == 'Z') {
      if (s.at(i+1) == 'O') {
        if (s.at(i+2) == 'N') {
          if (s.at(i+3) == 'e') {
            count++;
          }
        }
      }
    }
  }
  cout << count << endl;
  
}
