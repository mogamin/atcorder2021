#include <bits/stdc++.h>
using namespace std;

int divied(int original, int n) {
  if (n == 1) {
    return 0;
  }

  bool a = divied(original, n - 1);
  if ((original % n) == 0) {
    return a + 1;
  } else {
    return a + 0;
  }
}


bool is_prime(int n) {
  if (divied(n, n-1) > 0) {
    return false;
  } else {
    return true;
  }
}


int main() {
  int N;
  cin >> N;

  if (is_prime(N)) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
