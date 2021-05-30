#define _GLIBCCX_DEBUG
#include <bits/stdc++.h>
using namespace std;


int main() {
  int N, K;
  cin >> N >> K;
  vector<long long> A(N);
  vector<long long> B(N);
  for (int i=0 ; i<N ; i++) {
    cin >> A.at(i) >> B.at(i);
  }

  long long lower = 0;
  //long long upper = pow(10, 10.0);
  long long upper = pow(10, 4.0);
  long long mid = 0;
  long long pay = 0;
  while(lower <= upper) {
    mid = (lower + upper)/2;
    //pay = (mid * (mid + 1))/2;
    pay = mid;
    long long wallet = 0;

    auto it = lower_bound(A.begin(), A.end(), mid);
    auto index = distance(A.begin(), it);
    cout << "index=" << index << endl;
    for (int i=0; i<index; i++) {
      wallet += B.at(i);
    }
    wallet += K;
    cout << "lower=" << lower << ",upper=" << upper << ",mid=" << mid <<  ",wallet=" << wallet << ",pay=" << pay << endl;
    
    if (pay == wallet) {
      cout << "pay == wallet" << endl;
      break;
    } else if (pay < wallet) {
      lower = mid + 1;
    } else if (wallet < pay) {
      upper = mid - 1;
    }
  }

  cout << mid << endl;
  
}
