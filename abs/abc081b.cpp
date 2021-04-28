#include <bits/stdc++.h>
using namespace std;

int main() {
  int n=0;
  vector<int> numbers;

  cin >> n;
  for(int i=0; i<n ;i++) {
    int _n = 0;
    cin >> _n;
    numbers.push_back(_n);
  }

  bool is_next = true;
  int count = 0;
  while(is_next) {
    bool is_even = true;
    for(int i=0; i<n ;i++) {
      if (numbers.at(i)%2 != 0) {
        is_even = false;
      }
    }
    if (is_even) {
      for(int i=0; i<n ;i++) {
        numbers.at(i) = numbers.at(i)/2;
      }
      count++;
    } else {
      break;
    }
  }

  cout << count << endl;
  
}

