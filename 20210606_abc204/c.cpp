#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

string make_route(int s, int n){
  return to_string(s) + ":" + to_string(n);
}

void find_next(int&sum, int original, int start, vector<int> &R, map<string, int> &reached_map, map<int, int> &reached_node) {
  int next = R.at(start);
  if (next == -1) {
    return;
  } else {
    if (reached_node.count(next)) {
      //cout << "reached_node exists=" << next << endl;
      return;
    }
    reached_node[next] = 1;
    //cout << "reached_node=" << next << endl;
    if (reached_map.count(make_route(original, next))) {
      return;
    } else {
      sum++;
      //cout << "sum=" << sum << ",find:o=" << original << ",s=" << start << ",n=" << next << endl;
      reached_map[make_route(original, next)] = 1;
    }
    find_next(sum, original, next, R, reached_map, reached_node);
  }
}

int main() {
  int N,M;
  cin >> N >> M;
  vector<int> A(M);
  vector<int> B(M);
  for (int i=0; i<M ;i++) {
    cin >> A.at(i);
    cin >> B.at(i);
  }

  // initialize
  vector<int> R(2001);
  for(int &x : R) {
    x = -1;
  }

  for (int i=0; i<M ;i++) {
    R.at(A.at(i)) = B.at(i);
  }

  int sum = 0;
  map<string, int> reached_map;
  map<int, int> reached_node;
  for(int i=1;i<N+1;i++) {
    reached_node.clear();
    reached_node[i] = 1;
    find_next(sum, i, i, R, reached_map, reached_node);
  }
  cout << sum + N << endl;
  
}
