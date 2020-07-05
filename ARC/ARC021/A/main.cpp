#include <bits/stdc++.h>
using namespace std;

int main() {

  int A[4][4];
  string ans = "GAMEOVER";
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> A[i][j];
      if (j != 0) {
        if (A[i][j-1] == A[i][j]) {
          ans = "CONTINUE";
        }
      }
    }
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (j != 0) {
        if (A[j-1][i] == A[j][i]) {
          ans = "CONTINUE";
        }
      }
    }
  }

  cout << ans << endl;
  return 0;

}
