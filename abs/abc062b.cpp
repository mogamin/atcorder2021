#include <bits/stdc++.h>
using namespace std;

int main() {
  int h,w;
  cin >> h >> w;

  vector<string> v;

  string frame = "";
  for (int j=0; j<w+2 ;j++) {
    frame += "#";
  }
  v.push_back(frame);
  
  for (int i=0; i<h ;i++) {
    string str;
    cin >> str;
    v.push_back("#" + str + "#");
  }

  v.push_back(frame);

  for (int i=0; i<v.size() ;i++) {
    cout << v.at(i) << endl;
  }
  
}
