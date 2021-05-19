#include <bits/stdc++.h>
using namespace std;

int main() {

  pair<string ,int> p("abc", 3);
  cout << p.first << endl;
  cout << p.second << endl;

  p.first = "hellow";
  cout << p.first << endl;
  cout << p.second << endl;

  p = make_pair("***", 1);
  
  string s ; int i;
  tie(s, i) = p;
  cout << p.first << endl;
  cout << p.second << endl;

  
}
