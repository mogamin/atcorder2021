#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,M;
  cin >> N >> M;
  vector<int> WIN(M), LOSS(M);
  for (int i=0; i<M ; i++) {
    cin >> WIN.at(i) >> LOSS.at(i);
  }


  vector<vector<char>> R(N, vector<char>(N,'-'));
  for (int i=0; i<M ; i++) {
    char win_m = WIN.at(i);
    char los_m = LOSS.at(i);
    R.at(win_m -1).at(los_m -1) = 'o';
    R.at(los_m -1).at(win_m -1) = 'x';
  }

  for(int i=0; i<N ; i++) {
    for(int j=0; j<N ; j++) {
      if (j==N-1) {
        cout << R.at(i).at(j) << endl;
      } else {
        cout << R.at(i).at(j) << " ";
      }
    }
  }
 
}
