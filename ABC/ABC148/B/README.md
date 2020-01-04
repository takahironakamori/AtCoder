### ABC148

# B - Strings with the Same Length

  [問題はこちら](https://atcoder.jp/contests/abc148/tasks/abc148_b)


- 発想<br>
  S の 1 文字目、T の 1 文字目と交互に出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    string S, T;
    cin >> S >> T;

    string answer = "";

    for (int i = 0; i < N; i++){
      answer += S[i];
      answer += T[i];
    }

    cout << answer << endl;

  }
  ```
    