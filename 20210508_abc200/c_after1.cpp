#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 0;
  cin >> n;
  vector<long> A(n);
  vector<long> A_MOD(200, 0);
  for(long &x : A) {
    cin >> x;
    A_MOD.at(x%200)++;
  }

  long find_count = 0;
  for(int i=0; i<200 ;i++) {
    long same_mod_count = A_MOD.at(i);
    find_count += (same_mod_count * (same_mod_count -1)) / 2;
  }
  
  cout << find_count << endl;
}
