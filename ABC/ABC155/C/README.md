### ABC155

# C - Poll

  [問題はこちら](https://atcoder.jp/contests/abc155/tasks/abc155_c)


- 発想<br>
  [名前(string),得票数(int)]の map を作って、S<sub>1</sub> から S<sub>N</sub> までを集計する。<br>
  map をすべて確認し、最大得票数を探す。<br>
  map をすべて確認し、最大得票数と同じ人の名前を表示する。<br>
  map を使うと、名前は辞書順にならんでいるから名前が辞書順に並んでいるか否かは気にしなくていい。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    map<string, int> mp;
    for (int i = 0; i < N; i++) {
      string s_;
      cin >> s_;
      mp[s_]++;
    }

    int mx = 0;
    for (auto item:mp) {
      mx = max(mx, item.second);
    }

    for (auto item:mp) {
      if (item.second == mx) {
        cout << item.first << endl;
      }
    }

    return 0;

  }
  ```
