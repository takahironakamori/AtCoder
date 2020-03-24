### ABC089

# C - March

  [問題はこちら](https://atcoder.jp/contests/abc089/tasks/abc089_c)


## 発想

  頭文字が同じ名前が何個あるかを数える。<br>
  M、A、R、C、Hから3つ抜き出すパターンは10パターンなので、全パターン計算する。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    map<char, long long> S;
    for (int i = 0; i < N; i++) {
      string s;
      cin >> s;
      S[s[0]]++;
    }

    long long answer = 0;

    answer += S['M'] * S['A'] * S['R'];
    answer += S['M'] * S['A'] * S['C'];
    answer += S['M'] * S['A'] * S['H'];
    answer += S['M'] * S['R'] * S['C'];
    answer += S['M'] * S['R'] * S['H'];
    answer += S['M'] * S['C'] * S['H'];
    answer += S['A'] * S['R'] * S['C'];
    answer += S['A'] * S['R'] * S['H'];
    answer += S['A'] * S['C'] * S['H'];
    answer += S['R'] * S['C'] * S['H'];

    cout << answer << endl;

    return 0;

  }
  ```
