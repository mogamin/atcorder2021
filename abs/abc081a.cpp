#include <bits/stdc++.h>
using namespace std;

int main() {
  int s=0;
  int s1=0, s2=0, s3=0;

  cin >> s;
  // for S1
  s1 = s/100;

  // for S2
  if (s1>0) {
    s = (s - 100);
  }
  s2 = s/10;

  // for S3
  if (s2>0) {
    s = (s - 10);
  }
  s3 = s;
  
  cout << s1 + s2 + s3 << endl;
  
}
