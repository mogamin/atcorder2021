#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b;


  if ((a==0) && (b==1)) {
    c = 2;
  }
  if ((a==1) && (b==0)) {
    c = 2;
  }
  if ((a==1) && (b==2)) {
    c = 0;
  }
  if ((a==2) && (b==1)) {
    c = 0;
  }
  if ((a==0) && (b==2)) {
    c = 1;
  }
  if ((a==2) && (b==0)) {
    c = 1;
  }
  if (a==b) {
    c = a;
  }

  cout << c << endl;
  
}
