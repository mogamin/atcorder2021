#include <bits/stdc++.h>
using namespace std;

int sum_range(int a, int b) {
  if (a == b) {
    return b;
  }

  int s = sum_range(a, b-1);
  return s + b;
}

int main() {
  int A,B;
  cin >> A >> B;
  cout << sum_range(A, B) << endl;
}
