### ABC045

# C - たくさんの数式

  [問題はこちら](https://atcoder.jp/contests/abc045/tasks/arc061_a)


## 発想

  +を入れる箇所のパターンを全部試す。<br>
  bit全探索やdfsを利用すればいい。


## コード1（C++）bit全探索を使った場合

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string S;
    cin >> S;

    long long answer = 0;

    for (int bits = 1; bits < (1 << S.size()-1); bits++) {

      vector<string> s(S.size());

      int current = 0;

      for (int i = 0; i < S.size(); i++) {
        s[current] += S[i];
        if (bits >> i & 1) {
          current++;
        }
      }

      long long result = 0;

      for (int i = 0; i < s.size(); i++) {
        result += atoi(s[i].c_str());
      }

      answer += result;

    }

    cout << answer + atoll(S.c_str()) << endl;

    return 0;

  }
  ```


## コード2（C++）dfsを使った場合

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  long long dfs (string s, int count) {

    if (count == s.size() - 1) {

      vector<string> s_(s.size());
      int current = 0;

      for (int i = 0; i < s.size(); i++) {
        if (s[i] != '+') {
          s_[current] += s[i];
        } else {
          current++;
        }
      }

      long long result_ = 0;

      for (int i = 0; i < s_.size(); i++) {
        result_ += atoll(s_[i].c_str());
      }

      return result_;

    }

    long long result = 0;

    // +を入れない
    result += dfs(s, count + 1);

    // +を入れる
    s = s.substr(0, count + 1) + "+" + s.substr(count + 1);

    result += dfs(s, count + 2);

    return result;

  }

  int main() {

    string S;
    cin >> S;

    cout << dfs(S, 0) << endl;

    return 0;

  }
  ```
