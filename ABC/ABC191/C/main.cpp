#include <bits/stdc++.h>
using namespace std;

int main() {

  int H, W;
  cin >> H >> W;

  vector<string> S(H);
  for (int i = 0; i < H; ++i) {
    cin >> S[i];
  }

  int ans = 0;

  for (int i = 0; i < H - 1; ++i) {
    for (int j = 0; j < W - 1; ++j) {
      int count = 0;
      if (S[i][j] == '#') {
        count++;
      }
      if (S[i][j+1] == '#') {
        count++;
      }
      if (S[i+1][j] == '#') {
        count++;
      }
      if (S[i+1][j+1] == '#') {
        count++;
      }
      if (count == 1 || count == 3) {
        ans++;
      }
    }
  }

  cout << ans << endl;

  return 0;

}