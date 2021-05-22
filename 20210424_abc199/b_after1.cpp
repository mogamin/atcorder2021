#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  vector<int> B(N);
  for(int &x : A) {
    cin >> x;
  }
  for(int &x : B) {
    cin >> x;
  }

  int count = 0;
  for(int i=1; i<=1000; i++) {
    bool isOK = true;
    for(int j=0; j<N; j++) {
      if ((A.at(j) <= i) && (i <= B.at(j))) {
        ;
      } else {
        isOK = false;
      }
    }
    if (isOK) {
      count++;
    }
  }
  cout << count << endl;
  
}
