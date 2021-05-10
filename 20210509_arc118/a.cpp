#include <bits/stdc++.h>
using namespace std;

int main() {
  int t,N;
  cin >> t >> N;

  int max = pow(10, 9);
  
  int count = 0;
  // int now_number = 0;
  long pre_number = 0;
  vector<long> S;
  
  for(int i=1; i<=max; i++) {
    float _x = ((100+t)/100.0) * i;
    long x = (long)_x;

    cout << "_x, x, (i+count)=" << _x << "," << x << "," << (i+count) << endl;
    if (x != (i+count)) {
      cout << "YES:count=" << count << ",(i+count)=" << (i+count) << ",diff=" << (i+count) - pre_number << endl;
      S.push_back(i+count);
      pre_number = i+count;
      count++;
      //cout << i * N << endl;
      //return 0;
      //if (count > 10) return 0;
      // if ((count-1)==N) {
      //   cout << (i+count-1) << endl;
      //   return 0;
      // }
      if (S.size()==N) {
        cout << S.at(S.size()-1) << endl;
        return 0;
      }
    }

  }
}


    /*
    now_number++;
    if (x == now_number) {
      pre_number = now_number;
    } else {
      count += now_number - pre_number;
      pre_number = x;
      now_number = x;
      if (count == N) {
        cout << now_number -1  << endl;
        return 0;
      }
    }
    */

