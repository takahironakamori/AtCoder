#include <bits/stdc++.h>
using namespace std;

int main() {

  string S;
  cin >> S;

  string ans = "";

  for (int i = 0; i < S.size(); i++) {
    if ('0' <= S[i] && S[i] <= '9') {
      ans += S[i];
    }
  }

  cout << ans << endl;
  return 0;

}
