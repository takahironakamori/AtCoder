#include <bits/stdc++.h>
using namespace std;

int main() {

  long long N, X, M;
  cin >> N >> X >> M;
  
  long long current = X;
  vector<int> amari(M);
  vector<int> v(100100);

  bool flg = true;
  int count = 1;

  int hajimeSize = 0;
  int repeatSize = 0;
  long long repeatSum = 0;

  long long ans = current;
  v[0] = current;
  hajimeSize = 1;

  while (flg) {
    current = (current * current) % M;
    amari[current]++;
    v[count] = current;
    if (amari[current] == 1) {
      ans += current;
      hajimeSize++;
    } else if (amari[current] == 2) {
      repeatSum += current;
      repeatSize++;
    } else if (amari[current] == 3) {
      flg = false;
    }
    if (N - 1 == count) {
      flg = false;
    } else {
      count++;
    }
  }

  hajimeSize -= repeatSize;

  if (0 < repeatSize) {

    long long repeatCount = (N - hajimeSize) / repeatSize;
    ans += repeatSum * (repeatCount - 1);
  
    long long zan = (N - hajimeSize) % repeatSize;
    for (int i = 0; i < zan; ++i) {
      ans += v[i + hajimeSize];
    }

  }

  cout << ans << endl;

  return 0;

}