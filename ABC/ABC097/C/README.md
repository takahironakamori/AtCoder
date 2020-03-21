### ABC097

# C - K-th Substring

  [問題はこちら](https://atcoder.jp/contests/abc097/tasks/arc097_a)


## 発想

  Kの最大は5で、K文字を超えるものは回答にはならない。<br>
  sから長さKまでのsubstringを作って、setに入れ、K番目を探す。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s;
    cin >> s;

    int K;
    cin >> K;

    set<string> st;

    for (int i = 0; i < s.size(); i++) {
      string s_ = "";
      for (int j = i; j < s.size(); j++) {
        s_ += s[j];
        st.insert(s_);
        if (K < s_.size()) {
          break;
        }
      }
    }

    int count = 1;
    for (auto item:st) {
      if (count == K) {
        cout << item << endl;
        break;
      }
      count++;
    }

    return 0;

  }
  ```
