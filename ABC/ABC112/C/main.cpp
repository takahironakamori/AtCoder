#include <bits/stdc++.h>
using namespace std;


int main() {

  int N;
  cin >> N;

  vector<int> x(N);
  vector<int> y(N);
  vector<int> h(N);
  for (int i = 0; i < N; i++) {
    cin >> x[i] >> y[i] >> h[i];
  }

  // x、y は 0 から 100 まで
  for (int i = 0; i <= 100; i++) {
    for (int j = 0; j <= 100; j++) {

      // あるべき高さ
      // -2:調査中止 -1:継続して調査する 0以上:高さ確定
      int height = -1;

      for (int k = 0; k < N; k++) {
        if (0 < h[k]) {
          // 頂点（j,i）の高さがいくつであるべきかを計算する。
          int tmp = h[k] + abs(i - x[k]) + abs(j - y[k]);
          if (height == -1) {
            height = tmp;
          } else {
            // height が -1 以外のときは高さが計算されている。
            // あるべき高さが同じじゃないと矛盾している。
            if (height != tmp) {
              height = -2;
              break;
            }
          }
        }
      }

      // 矛盾している場合は次の点に移動する
      if (height == -2) {
        continue;
      }

      // 高さ 0 の場合矛盾していないかを確認する
      for (int k = 0; k < N; k++) {
        if (h[k] == 0) {
          // 距離を計算する
          int tmp = abs(i - x[k]) + abs(j - y[k]);
          // 高さが距離より小さい場合は矛盾している
          if (height > tmp) {
            height = -2;
            break;
          }
        }
      }

      // 矛盾している場合は次の点に移動する
      if (height == -2) {
        continue;
      }

      cout << i << " " << j << " " << height << endl;

    }
  }

  return 0;

}
