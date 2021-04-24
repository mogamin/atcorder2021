#include <bits/stdc++.h>
using namespace std;

int main() {
  int s=0;
  int s1=0, s2=0, s3=0;

  cin >> s;
  s1 = s/100;
  if (s1>0) {
    s2 = (s - 100)/10;
  } else {
    s2 = s/10;
  }
  if (s2>0) {
    s3 = (s - 100);
  } else {
    s3 = s3;
  }
  
  cout << s1 << endl;
  cout << s2 << endl;
  cout << s3 << endl;
  
  cout << s1 + s2 + s3 << endl;
  
}
