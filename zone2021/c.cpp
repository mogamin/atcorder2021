#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  vector<int> B(N);
  vector<int> C(N);
  vector<int> D(N);
  vector<int> E(N);

  for(int i=0; i<N; i++) {
    cin >> A.at(i);
    cin >> B.at(i);
    cin >> C.at(i);
    cin >> D.at(i);
    cin >> E.at(i);
  }


  int max_total = 0;
  for(int i=0; i<N; i++) {
    for(int j=0; j<N; j++) {
      for(int k=0; k<N; k++) {
        if ((i==j) || (i==k) || (j==k)) {
          continue;
        }

        int maxA=0, maxB=0, maxC=0, maxD=0, maxE=0;
        maxA = max(max(A.at(i), A.at(j)), A.at(k));
        maxB = max(max(B.at(i), B.at(j)), B.at(k));
        maxC = max(max(C.at(i), C.at(j)), C.at(k));
        maxD = max(max(D.at(i), D.at(j)), D.at(k));
        maxE = max(max(E.at(i), E.at(j)), E.at(k));

        int total = 0;
        total = min(min(min(min(maxA, maxB), maxC), maxD), maxE);
        if (max_total < total) {
          max_total = total;
        }
        
      }
    }
  }

  cout << max_total << endl;
  
}
