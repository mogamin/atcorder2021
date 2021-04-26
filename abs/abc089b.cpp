#include <bits/stdc++.h>
using namespace std;

int main() {
  int n=0;
  string s="";
  bool isFour = false;

  cin >> n;
  for (int i=0; i<n; i++){
    cin >> s;
    if (s=="Y"){
      isFour = true;
    }
  }

  if (isFour) {
    cout << "Four" << endl;
  } else {
    cout << "Three" << endl;
  }
  
}


