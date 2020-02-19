### ABC112

# C - Pyramid

  [問題はこちら](https://atcoder.jp/contests/abc112/tasks/abc112_c)


- 発想<br>
  C<sub>X</sub>、C<sub>Y</sub>、H は整数なので、<br>
  x<sub>i</sub>、y<sub>i</sub> は 0 から 100 までなので、101 × 101 の 10201 通りしか頂上のポイントがない。<br>
  N も 100 までなので、10201 × 100 の全通り試すことができる。<br>
  すべての x<sub>i</sub>、y<sub>i</sub> が頂点か否かを確認することができる。<br>
  ある点が すべての N で矛盾しない点を探す。<br>
  ただし、まずは N の高さが 0 じゃない場合だけを考える。<br>
  高さが 0 以外の場合で、矛盾しない場合は、次に高さが 0 の場合に矛盾しないかを確認する。<br>
  高さが 0 の場合は、距離が高さより小さい場合は、矛盾している。


- コード（C++）

  ```cpp
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
  ```
