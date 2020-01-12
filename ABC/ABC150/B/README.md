### ABC150

# B - Count ABC

  [問題はこちら](https://atcoder.jp/contests/abc150/tasks/abc150_b)


- 発想<br>
  文字列 S を 1 文字目から順番に 3 文字を抜き出し、<br>
  抜き出した文字列が ABC である場合の数を数える。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    string S;
    cin >> S;

    int answer = 0;

    for (int i = 0; i < N - 2; i++) {
      string s_ = S.substr(i,3);
      if (s_ == "ABC") {
        answer++;
      }
    }

    cout << answer << endl;

  }
  ```
    