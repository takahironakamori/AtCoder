### ABC058

# C - 怪文書

  [問題はこちら](https://atcoder.jp/contests/abc058/tasks/abc058_b)


## 発想

  最も長い文字列を作るには、S_1からS_nまでで使われているaからzまでのアルファベットが使われている回数の最小値を探す。<br>
  aからzまでそれぞれの最小値分出力する。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<vector<int>> count(n, vector<int>(27));
    for (int i = 0; i < n; i++) {
      string S;
      cin >> S;
      for (int j = 0; j < S.size(); j++){
        count[i][(int) S[j] - 'a']++;
      }
    }

    vector<int> answer(27);

    for (int i = 0; i < 27; i++) {
      int count_ = 100;
      for (int j = 0; j < n; j++) {
        count_ = min(count_, count[j][i]);
      }
      if (count_ == 100) {
        answer[i] = 0;
      } else {
        answer[i] = count_;
      }
    }

    for (int i = 0; i < 27; i++) {
      for (int j = 0; j < answer[i]; j++) {
        cout << char(i + 'a');
      }
    }

    cout << endl;

    return 0;

  }
  ```
