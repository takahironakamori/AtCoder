#include <bits/stdc++.h>
using namespace std;

int main() {

  int R, C, K;
  cin >> R >> C >> K;

  vector<string> s(R);
  for (int i = 0; i < R; i++) {
    cin >> s[i];
  }

  vector<vector<int>> ue(R, vector<int>(C));
  vector<vector<int>> shita(R, vector<int>(C));

  // 上に連続する白マスが何個あるかを数える
  for (int i = 0; i < C; i++) {
    int white = 0;
    for (int j = 0; j < R; j++) {
      if (s[j][i] == 'x') {
        ue[j][i] = 0;
        white = 0;
      } else {
        white++;
        ue[j][i] = white;
      }
    }
  }

  // 下に連続する白マスが何個あるかを数える
  for (int i = C- 1; 0 <= i; i--) {
    int white = 0;
    for (int j = R - 1; 0 <= j; j--) {
      if (s[j][i] == 'x') {
        shita[j][i] = 0;
        white = 0;
      } else {
        white++;
        shita[j][i] = white;
      }
    }
  }

  // スタート地点を決める
  int sx = K - 1;
  int sy = K - 1;

  int count = 0;

  for (int i = sy; i < R - K + 1; i++) {
    for (int j = sx; j < C - K + 1; j++) {
      bool isBlack = false;
      for (int k = 1 - K; k < K; k++) {
        if ((K - abs(k)) > ue[i][j + k] || (K - abs(k)) > shita[i][j + k]) {
          isBlack = true;
          break;
        }
      }
      if (!isBlack) {
        count++;
      }
    }
  }

  cout << count << endl;

  return 0;

}
