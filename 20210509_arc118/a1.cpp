#include <bits/stdc++.h>
using namespace std;

int main() {
  int t,N;
  cin >> t >> N;

  double a = 100.0/t;
  cout << "a=" << to_string(a) << endl;
  long long b = a * N + N - 0.5;
  cout << "b1=" << to_string(a * N) << endl;
  cout << "b2=" << to_string(a * N - 0.5) << endl;
  cout << to_string(int(b)) << endl;

}
