#include <bits/stdc++.h>
using namespace std;

void swap_number(int index, vector<int> &data) {
  if ((data.size()%2)==0) {
    if (index > (data.size()/2)) {
      return;
    }
  } else {
    if (index == floor((data.size()/2)+0.5)) {
      return;
    }
  }

  swap_number(index+1, data);
  swap(data.at(index), data.at(data.size()-1-index));
}

void reverse_array(vector<int> &data) {
  swap_number(0, data);
}

int main() {
  int N;
  cin >> N;
  vector<int> data(N);
  for(int &x : data){
    cin >> x;
  }

  reverse_array(data);
  
  for(int &x : data) {
    cout << x << " ";
  }
  cout << endl;
}
