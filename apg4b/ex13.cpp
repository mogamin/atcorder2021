#include <bits/stdc++.h>
using namespace std;

int main() {
  int n=0;
  cin >> n;
  vector<int> v(n);

  int sum = 0;
  for(int i=0; i<n ; i++) {
    cin >> v.at(i);
    sum += v.at(i);
  }

  int avg = sum / v.size();
  for(int i=0; i<n ; i++) {
    cout << abs(v.at(i) - avg) << endl;
  }
  
}
