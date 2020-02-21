### ABC123

# D - Cake 123

  [問題はこちら](https://atcoder.jp/contests/abc123/tasks/abc123_d)

## 発想

  1000 × 1000 × 1000 はできない。<br>
  そこで、 1000 × 1000 から上位 K 個（最大 3000 個）を抜き出し、<br>
  K × 1000 を計算する。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;


  int main() {

    int X, Y, Z, K;
    cin >> X >> Y >> Z >> K;

    vector<long long> A(X);
    for (int i = 0; i < X; i++) {
      cin >> A[i];
    }

    vector<long long> B(Y);
    for (int i = 0; i < Y; i++) {
      cin >> B[i];
    }

    vector<long long> C(Z);
    for (int i = 0; i < Z; i++) {
      cin >> C[i];
    }

    // C は大きい順に並び替えておく
    sort(C.begin(), C.end(), std::greater<long long>());

    // A + B を全部作る
    vector<long long> AB;
    for (int i = 0; i < X; i++) {
      for (int j = 0; j < Y; j++) {
        AB.push_back(A[i] + B[j]);
      }
    }

    // A + B を大きい順に並び替える
    sort(AB.begin(), AB.end(), std::greater<long long>());

    // (A + B) + C を作る
    // (A + B) は、大きい方から K 個と(A + B)の個数との小さい方を使う
    vector<long long> ABC;
    for (int i = 0; i < min(K, (int) AB.size()); i++) {
      for (int j = 0; j < Z; j++) {
        ABC.push_back(AB[i] + C[j]);
      }
    }

    // (A + B) + C を大きい順に並び替える
    sort(ABC.begin(), ABC.end(), std::greater<long long>());

    // 出力する
    for (int i = 0; i < K; i++) {
      cout << ABC[i] << endl;
    }

    return 0;

  }
  ```
