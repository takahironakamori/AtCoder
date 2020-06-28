#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<int> E(10);
  for (int i = 0; i < 6; i++) {
    int e;
    cin >> e;
    E[e] = 1;
  }

  int B;
  cin >> B;
  E[B] = 2;

  int count = 0;
  bool bonus = false;

  for (int i = 0; i < 6; i++) {
    int L;
    cin >> L;
    if (E[L] == 1) {
      count++;
    }
    if (E[L] == 2) {
      bonus = true;
    }
  }

  int ans = 0;
  ans = 7 - count;
  if (ans != 1) {
    if (ans != 2 || !bonus) {
      ans++;
    }
  }
  if (5 < ans) {
    ans = 0;
  }
  cout << ans << endl;
  return 0;

}
