#include <bits/stdc++.h>
using namespace std;

int main(){
  int x=0, sum=0;
  cin >> x;
  
  int original_x = x;

  while(x > 0) {
    sum += x % 10;
    x /= 10;
  }

  if ((original_x%sum) == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  
}
