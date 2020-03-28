### ABC076

# C - Dubious Document 2

  [問題はこちら](https://atcoder.jp/contests/abc076/tasks/abc076_c)


## 発想

  SをT文字分抜き出して、Tが作れるか否かを調べる。<br>
  Tが作れる場合は、S内に作れるTの前後はaで埋める。<br>
  aで埋めた文字列のminをとる。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  bool match(string s, string t) {
    for (int i = 0; i < s.size(); i++) {
      if (s[i] != '?' && s[i] != t[i]) {
        return false;
      }
    }
    return true;
  }

  int main() {

    string S, T;
    cin >> S >> T;

    string answer = "UNRESTORABLE";

    for (int i = 0; i <= (int) S.size() - (int) T.size(); i++) {
      string s = S.substr(i, T.size());
      if (match(s, T)) {
        string answer_ = S;
        for (int j = i; j < i + T.size(); j++) {
          answer_[j] = T[j - i];
        }
        for (int j = 0; j < i; j++) {
          if (answer_[j] == '?') {
            answer_[j] = 'a';
          }
        }
        for (int j = i + T.size(); j < S.size(); j++) {
          if (answer_[j] == '?') {
            answer_[j] = 'a';
          }
        }
        if (answer == "UNRESTORABLE") {
          answer = answer_;
        } else {
          answer = min(answer, answer_);
        }
      }
    }

    cout << answer << endl;

    return 0;

  }
  ```
