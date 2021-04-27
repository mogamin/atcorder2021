#include <bits/stdc++.h>
using namespace std;

int main() {
  int a=0, b=0, count=0;
  cin >> a >> b;

  for(int i=a; i<b+1; i++){
    vector<int> v_numbers;
    int target = i;
    while (target > 0) {
      v_numbers.push_back(target%10);
      target /= 10;
    }

    int isPalindromic = true;
    int j = v_numbers.size();
    while ( (j/2) > 0) {
      if (v_numbers[v_numbers.size()-j] != v_numbers[j-1]) {
        isPalindromic = false;
      }
      j--;
    }

    if (isPalindromic) {
      count++;
    }
  }

  cout << count << endl;
}
