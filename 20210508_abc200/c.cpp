#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 0;
  cin >> n;
  vector<int> A(n);
  for(int &x : A) {
    cin >> x;
  }

  sort(A.begin(), A.end());
   
  int all_count = 0;
  for(int i=0; i<n-1 ; i++) {
    all_count += count(A.begin()+i+1, A.end(), A.at(i));

    for (int k=200; (A.at(i)+k) <= A.at(n-1) ; ) {
      all_count += count(A.begin()+i+1, A.end(), A.at(i)+k);
      k += 200;
    }
  }

  cout << all_count << endl;
}
