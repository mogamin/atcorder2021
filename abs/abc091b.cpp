#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,m;
  vector<string> vs,vt;

  cin >> n;
  for(int i=0; i<n ; i++) {
    string str;
    cin >> str;
    vs.push_back(str);
  }
  
  cin >> m;
  for(int i=0; i<m ; i++) {
    string str;
    cin >> str;
    vt.push_back(str);
  }

  vector<string> dict;
  for(int i=0; i<(int)vs.size() ; i++) {
    string value = vs.at(i);
    bool is_exists = false;
    for(int j=0; j<(int)dict.size() ; j++) {
      if (value == dict.at(j)) {
        is_exists = true;
        break;
      }
    }
    if (!is_exists) {
      dict.push_back(value);
    }
  }

  int max_dict_result = 0;
  string max_dict_result_string = "";
  for(int i=0; i<(int)dict.size() ; i++) {
    string str_dict = dict.at(i);
    int result = 0;
    for(int j=0; j<(int)vs.size() ; j++) {
      if (str_dict == vs.at(j)) result++;
    }
    for(int j=0; j<(int)vt.size() ; j++) {
      if (str_dict == vt.at(j)) result--;
    }
    if (max_dict_result < result) {
      max_dict_result = result;
      max_dict_result_string = str_dict;
    }
  }

  cout << max_dict_result << endl;
  
}
