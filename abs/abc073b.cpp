#include <bits/stdc++.h>
using namespace std;

int main() {
  int n=0, sum=0 ,rs=0 ,re=0;

  cin >> n;
  for(int i=0; i<n; i++) {
    cin >> rs >> re;
    sum += re - rs + 1;
  }
''  cout << sum << endl;
  
}
