#include <bits/stdc++.h>
using namespace std;

string print_sub_formura(int v, int op) {
  if (op == 0) {
    return "+" + to_string(v);
  } else {
    return "-" + to_string(v);
  }
}

string print_formula(int A, int B, int C, int D, int i, int j, int k) {
  string _line = to_string(A);
  _line += print_sub_formura(B, i);
  _line += print_sub_formura(C, j);
  _line += print_sub_formura(D, k);
  return _line + "=7";
}

int calc(int a, int b, int op) {
  if (op == 0) {
    return a + b;
  } else {
    return a - b;
  }
}


int my_sum(int A, int B, int C, int D, int i, int j, int k) {
  int sum = 0;
  sum = calc(A,   B, i);
  sum = calc(sum, C, j);
  sum = calc(sum, D, k);
  return sum;
}

int main() {
  int A,B,C,D,X;
  cin >> X;

  A=(X/1000);
  B=(X/100)- A*10;
  C=(X/10) - A*100  - B*10;
  D=(X/1)  - A*1000 - B*100 - C*10;

  for(int i=0; i<2 ; i++) {
    for(int j=0; j<2 ; j++) {
      for(int k=0; k<2 ; k++) {
        if (my_sum(A,B,C,D,i,j,k) == 7) {
          cout << print_formula(A,B,C,D,i,j,k) << endl;
          return 0;
        }
      }
    }
  }
  
}
