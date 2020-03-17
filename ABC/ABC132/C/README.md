### ABC132

# C - Divide the Problems

  [問題はこちら](https://atcoder.jp/contests/abc132/tasks/abc132_c)


## 発想

  配列に入れて並び替えて、N / 2 番目の要素とN / 2 - 1 番目の要素の差が回答となる。<br>


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> d(N);
    for (int i = 0; i < N; i++) {
      cin >> d[i];
    }

    sort(d.begin(), d.end());

    int start = N / 2 - 1;
    int end = N / 2;

    int answer = d[end] - d[start];

    cout << answer << endl;

    return 0;

  }
  ```
