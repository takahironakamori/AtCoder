### ABC145

# B - Echo

  [問題はこちら](https://atcoder.jp/contests/abc145/tasks/abc145_b)


- 発想<br>
  N / 2 文字分の部分文字列と、S の N / 2 文字目から始める N / 2 文字分の部分文字列が同じならば Yes、<br>
  そうでなければ No を出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    string S;
    cin >> S;

    if (S.substr(0, N / 2) == S.substr(N / 2)) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }

  }
  ```
    