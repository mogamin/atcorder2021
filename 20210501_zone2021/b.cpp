#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  float D,H;
  cin >> N >> D >> H;
  vector<float> vD(N);
  vector<float> vH(N);
  for(int i=0; i<N ; i++) {
    cin >> vD.at(i);
    cin >> vH.at(i);
  }

  float max_hight = 0;
  for(int i=0; i<N ; i++) {
    float _slope = (H - vH.at(i)) / (D - vD.at(i));
    float hight = vH.at(i) - (_slope * vD.at(i));
    if (max_hight < hight) {
      max_hight = hight;
    }
  }

  if (max_hight < 0) {
    cout << 0.0 << endl;
  } else {
    cout << max_hight << endl;
  }

}
