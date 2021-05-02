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
  vector<int> X(N);

  for(int i=0; i<N; i++) {
    cin >> A.at(i);
    cin >> B.at(i);
    cin >> C.at(i);
    cin >> D.at(i);
    cin >> E.at(i);
  }

  for(int i=0; i<N; i++) {
    int _max = max(max(max(max(A.at(i), B.at(i)), C.at(i)), D.at(i)),E.at(i));
    int _min = min(min(min(min(A.at(i), B.at(i)), C.at(i)), D.at(i)),E.at(i));
    X.at(i) = (_max - _min)/2;
  }

  sort(X.begin(), X.end());
  reverse(X.begin(), X.end());

  int avg_m1 = X.at(0);
  int avg_m2 = X.at(1);
  int avg_m3 = X.at(2);

  vector<int> members;
  for(int i=0; i<N; i++) {
    if ((avg_m1 == X.at(i)) || (avg_m2 == X.at(i)) || (avg_m3 == X.at(i))) {
      members.push_back(i);
      continue;
    }
  }
  
  int maxA = 0;
  for(int i=0; i<(int)members.size(); i++) {
    maxA += A.at(members.at(i));
  }
  int maxB = 0;
  for(int i=0; i<(int)members.size(); i++) {
    maxB += B.at(members.at(i));
  }
  int maxC = 0;
  for(int i=0; i<(int)members.size(); i++) {
    maxC += C.at(members.at(i));
  }
  int maxD = 0;
  for(int i=0; i<(int)members.size(); i++) {
    maxD += D.at(members.at(i));
  }
  int maxE = 0;
  for(int i=0; i<(int)members.size(); i++) {
    maxE += E.at(members.at(i));
  }
  int minium = min(min(min(min(maxA, maxB), maxC), maxD), maxE);
  
  cout << minium << endl;
  
}
