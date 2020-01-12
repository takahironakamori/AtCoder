### ABC150

# C - Count Order

  [問題はこちら](https://atcoder.jp/contests/abc150/tasks/abc150_c)


- 発想<br>
  1 から N までの順列を辞書順で全パターンをすべて生成する。<br>
  P と Q が何番目かを調べる。<br>
  
- 実装のポイント<br>
  1 から N までの順列を辞書順で全パターンをすべて生成するときは、<br>
  next_permutation 関数が便利。<br>
  また、map では配列を添字にすることができる。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;


  int main() {

    int N;
    cin >> N;

    vector<int> P(N);
    for (int i = 0; i < N; i++) {
      cin >> P[i];
    } 

    vector<int> Q(N);
    for (int i = 0; i < N; i++) {
      cin >> Q[i];
    }

    vector<int> v;
    for (int i = 0; i < N; i++) {
      v.push_back(i+1);
    }

    map<vector<int>, int> mp;
    do {
      mp[v] = mp.size();
    } while (next_permutation(v.begin(), v.end()));

    int a = mp[P];
    int b = mp[Q];

    cout << abs(a - b) << endl;

  }
  ```
    