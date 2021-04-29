#include <bits/stdc++.h>
using namespace std;

int main() {
  char c;
  cin >> c;

  vector<char> vec_vowel{'a', 'i', 'u', 'e', 'o'};
  bool is_vowel = false;
  for(int i=0; i<vec_vowel.size() ;i++) {
    if (c == vec_vowel.at(i)) {
      is_vowel = true;
      break;
    }
  }
  
  if (is_vowel) {
    cout << "vowel" << endl;
  } else {
    cout << "consonant" << endl;
  }
  
}
