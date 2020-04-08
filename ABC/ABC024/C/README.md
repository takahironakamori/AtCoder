### ABC024

# C - 民族大移動

  [問題はこちら](https://atcoder.jp/contests/abc024/tasks/abc024_c)


## 発想

  移動制限の性質から、街は一直線上に並んでいると考える。<br>
  街が一直線に並んでいるので、民族はSとTの間のすべての街を通過しなければならない。<br>
  民族は近づく方向にのみ進めばいい。<br>
  進みすぎたせいで、他の移動方法より近づけないことはないので、近づけるだけ近づいた方がいい。<br>
  愚直に調べる。<br>
  すなわち、各民族について別々に到達日を決める。<br>
  1日目から順番にTにできるだけ近づくように移動する。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, D, K;
    cin >> N >> D >> K;

    vector<int> L(D);
    vector<int> R(D);
    for (int i = 0; i < D; i++) {
      cin >> L[i] >> R[i];
    }

    vector<int> S(K);
    vector<int> T(K);
    for (int i = 0; i < K; i++) {
      cin >> S[i] >> T[i];
    }

    // 移動できる範囲
    int left = 0;
    int right = 0;

    // 移動済みか否かを確認する
    vector<int> end(K);

    // 1日目から順番に
    for (int i = 0; i < D; i++) {

      // 移動できる範囲を指定
      left = L[i];
      right = R[i];

      // 民族を移動させる
      for (int j = 0; j < K; j++) {
        if (end[j] == 0) {
          // 移動できる範囲内じゃないとダメ
          if (left <= S[j] && S[j] <= right) {
            if (S[j] < T[j]) {
              if (right < T[j]) {
                S[j] = right;
              } else {
                S[j] = T[j];
                end[j] = i + 1;
              }
            } else {
              if (T[j] < left) {
                S[j] = left;
              } else {
                S[j] = T[j];
                end[j] = i + 1;
              }
            }
          }
        }
      }
    }

    for (int i = 0; i < K; i++) {
      cout << end[i] << endl;
    }

    return 0;

  }
  ```
