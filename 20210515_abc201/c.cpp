#include <bits/stdc++.h>
using namespace std;

bool is_exists(vector<int> &target, int x) {
  for(int &_x : target) {
    if (x == _x) {
      return true;
    }
  }
  return false;
}

bool is_correct_count_have(vector<int> &target,
                           int a, int b, int c, int d) {
  bool is_correct = true;
  for(int &x : target) {
    if ((x == a) || (x == b) || (x == c) || (x == d)) {
      is_correct = true;
    } else {
      return false;
    }
  }
  return is_correct;
}


int main() {
  string S;
  cin >> S;
  vector<int> HAVE;
  vector<int> NOT_HAVE;
  vector<int> UNKNOWN;

  for(int i=0; i<(int)S.size() ;i++) {
    if (S.at(i) == 'o') {
      HAVE.push_back(i);
    }
    if (S.at(i) == 'x') {
      NOT_HAVE.push_back(i);
    }
    if (S.at(i) == '?') {
      UNKNOWN.push_back(i);
    }
  }

  if (HAVE.size()>4) {
    cout << "0" << endl;
  }


  vector<int> HAVE_UNKNOWN;
  int have_size = (int)HAVE.size();
  int unknown_size = (int)UNKNOWN.size();
  
  for(int i=0; i<have_size ; i++){
    HAVE_UNKNOWN.push_back(HAVE.at(i));
  }
  for(int i=0; i<unknown_size ; i++){
    HAVE_UNKNOWN.push_back(UNKNOWN.at(i));
  }

  int count = 0;
  int unknown_count = 0;
  int correct_unknown_size = 4 - (int)HAVE.size();


  for(int &a : HAVE_UNKNOWN) {
    cout << "a:" << a << ",unknown_count=" << unknown_count << endl;
    if (is_exists(UNKNOWN, a)) {
      unknown_count++;
      cout << "unknown_count:" << unknown_count << endl;
      cout << "correct_unknown_size:" << correct_unknown_size << endl;
      if ( unknown_count > correct_unknown_size) {
        unknown_count--;
        continue;
      }
      cout << "x" << endl;
    }
    for(int &b : HAVE_UNKNOWN) {
      cout << "b:" << b << endl;
      if (is_exists(UNKNOWN, b)) {
        unknown_count++;
        if ( unknown_count > correct_unknown_size ) {
          unknown_count--;
          continue;
        }
      }
      for(int &c : HAVE_UNKNOWN) {
        if (is_exists(UNKNOWN, c)) {
          unknown_count++;
          if ( unknown_count > correct_unknown_size ) {
            unknown_count--;
            continue;
          }
        }
        for(int &d : HAVE_UNKNOWN) {
          if (is_exists(UNKNOWN, d)) {
            unknown_count++;
            if ( unknown_count > correct_unknown_size ) {
              unknown_count--;
              continue;
            } else {
              if (is_correct_count_have(HAVE,a,b,c,d)) {
                unknown_count = 0;
                cout << a << b << c << d << endl;
                count++;
              }
            }
          } else {
            if (is_correct_count_have(HAVE,a,b,c,d)) {
              unknown_count = 0;
              cout << a << b << c << d << endl;
              count++;
            }
          }
        }
      }
    }
  }

  cout << count << endl;


  // cout << "HAVE:" << HAVE.size() << endl;
  // cout << "NOT_HAVE:" << NOT_HAVE.size() << endl;
  // cout << "UNKNOWN:" << UNKNOWN.size() << endl;
  // long count = pow(HAVE.size(), 4);
  // cout << count << endl;
  // cout << count * UNKNOWN.size() << endl;
  // cout << pow(10, 4) * UNKNOWN.size() << endl;
  // cout << HAVE.size() * HAVE.size() * UNKNOWN.size() * 4 << endl;
  
  
  // count *= UNKNOWN.size();
  // cout << count << endl;
  
}
