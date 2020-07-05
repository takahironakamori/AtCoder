#include <bits/stdc++.h>
using namespace std;

int main() {

  int L, R;
  cin >> L >> R;

  vector<int> countL(41);
  vector<int> countR(41);

  for (int i = 0; i < L; i++) {
    int l;
    cin >> l;
    countL[l]++;
  }

  for (int i = 0; i < R; i++) {
    int r;
    cin >> r;
    countR[r]++;
  }

  int ans = 0;

  for (int i = 0; i < 41; i++) {
    if (countL[i] != 0 && countR[i] != 0) {
      ans += min(countL[i], countR[i]);
    }
  }

  cout << ans << endl;

  return 0;

}
