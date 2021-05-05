#include <bits/stdc++.h>
using namespace std;

int sum_array(int index, vector<int> &data) {
  if (index == 0) {
    return data.at(0);
  }

  int s = sum_array(index-1, data);
  return s + data.at(index);
}

int main() {
  int N;
  cin >> N;
  
  vector<int> data(N);
  for(int &x : data) {
    cin >> x;
  }

  cout << sum_array(data.size()-1, data) << endl;
}
