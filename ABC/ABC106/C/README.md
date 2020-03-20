### ABC106

# C - To Infinity

  [問題はこちら](https://atcoder.jp/contests/abc106/tasks/abc106_c)


## 発想

  1がK文字続く場合は、回答は1となり、<br>
  それ以外の場合は、最初に現れる1以外の数値となる。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string S;
    long long K;
    cin >> S >> K;

    int answer = 1;

    for (int i = 0; i < min(K,(long long)S.size()); i++) {
      if ((S[i] - '0') != 1) {
        answer = S[i] - '0';
        break;
      }
    }

    cout << answer << endl;

    return 0;

  }
  ```
