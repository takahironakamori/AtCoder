#include <bits/stdc++.h>
using namespace std;

int main() {

  int K;
  cin >> K;

  vector<long long> a;
  for (int i = 1; i < 10; i++){
    a.push_back(i);
  }

  bool flg = true;
  while (flg) {
    if (K <= a.size()) {
      cout << a[K - 1] << endl;
      return 0;
    }
    K -= a.size();
    vector<long long> old;
    swap(old, a);
    for (int i = 0; i < old.size(); i++) {
      for (int j = -1; j < 2; j++) {
        int d = old[i] % 10 + j;
        if (d < 0 || 9 < d) {
          continue;
        }
        long long r = old[i] * 10 + d;
        a.push_back(r);
      }
    }
  }

  return 0;

}
