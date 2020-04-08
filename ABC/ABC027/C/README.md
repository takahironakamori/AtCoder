### ABC027

# C - 倍々ゲーム

  [問題はこちら](https://atcoder.jp/contests/abc027/tasks/abc027_c)


## 発想

  Nの深さの偶奇に応じて、AとBの戦略が決まる。<br>
  AとBの戦略を実際に試してみて、どちらが勝つかを判定する。<br>
  

## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    long long N;
    cin >> N;

    int depth = 0;

    for (long long i = N; 0 < i; i /= 2) {
      depth++;
    }

    long long x = 1;

    string current = "T";

    if (depth % 2 == 1) {
      while (x <= N) {
        if (current == "T") {
          x = x * 2 + 1;
          current = "A";
        } else {
          x = x * 2;
          current = "T";
        }
      }
    } else {
      while (x <= N) {
        if (current == "T") {
          x = x * 2;
          current = "A";
        } else {
          x = x * 2 + 1;
          current = "T";
        }
      }
    }

    if (current == "T") {
      cout << "Takahashi" << endl;
    } else {
      cout << "Aoki" << endl;
    }

    return 0;

  }
  ```
