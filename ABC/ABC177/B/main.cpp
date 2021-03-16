#include <bits/stdc++.h>
using namespace std;

int main() {

  string S, T;
  cin >> S >> T;

  int ans = T.size();
  int l = S.size() - T.size();

  for (int i = 0; i <= l; ++i) {
    int current = 0;
    for (int j = 0; j < int(T.size()); ++j) {
      if (S[j + i] != T[j]) {
        current++;
      }
    }
    ans = min(ans, current);
  }

  cout << ans << endl;

  return 0;

}