### ABC113

# C - ID

  [問題はこちら](https://atcoder.jp/contests/abc113/tasks/abc113_c)

## 発想

  PとYをPairで配列に入れる。<br>
  配列を複製し、1つを並び替える。<br>
  キーをPair、値を数値にした連想配列を用意して、並び替えた配列を元に県内で市が誕生した順番を入れる。<br>
  最初に作った配列をベースに、連想配列の値を取得して識別番号を作成し、出力する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M;
  cin >> N >> M;

  vector<pair<int,int>> v(M);
  for (int i = 0; i < M; i++) {
    cin >> v[i].first >> v[i].second;
  }

  // 並び替え用に v を複製する
  vector<pair<int,int>> v2 = v;

  sort(v2.begin(),v2.end());

  // 市内順位を持つmap
  map<pair<int,int>, int> mp;

  int current = v2[0].first;
  int count = 0;

  for (int i = 0; i < M; i++) {
    if (current == v2[i].first) {
      count++;
    } else {
      current = v2[i].first;
      count = 1;
    }
    mp[v2[i]] = count;
  }

  for (int i = 0; i < M; i++) {
    printf("%06d", v[i].first);
    printf("%06d", mp[v[i]]);
    printf("\n");
  }

  return 0;

}
```
