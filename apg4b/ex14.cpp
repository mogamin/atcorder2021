#include <bits/stdc++.h>
using namespace std;

int main() {
  int a,b,c;
  cin >> a >> b >> c;

  int max_v = max(a, b);
  max_v = max(max_v, c);

  int min_v = min(a, b);
  min_v = min(min_v, c);

  cout << max_v - min_v << endl;

}
