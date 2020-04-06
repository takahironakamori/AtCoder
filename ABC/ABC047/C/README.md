### ABC047

# C - 一次元リバーシ

  [問題はこちら](https://atcoder.jp/contests/abc047/tasks/arc063_a)

## 発想

  隣り合う文字が異なる箇所の数が回答となる。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string S;
    cin >> S;

    char current = S[0];
    int answer = 0;

    for (int i = 1; i < S.size(); i++) {
      if (current != S[i]) {
        current = S[i];
        answer++;
      }
    }

    cout << answer << endl;

    return 0;

  }
  ```
