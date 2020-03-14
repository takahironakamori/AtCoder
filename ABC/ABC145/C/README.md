### ABC145

# C - Average Length

  [問題はこちら](https://atcoder.jp/contests/abc145/tasks/abc145_c)


## 発想

  全パターンをnext_permutationを使って洗い出して、距離を計算して平均を出す。<br>
  

## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> x(N);
    vector<int> y(N);

    // 順列生成用の配列
    vector<int> v(N);

    for (int i = 0; i < N; i++) {
      cin >> x[i] >> y[i];
      v[i] = i;
    }

    double distance = 0.0;
    int count = 0;

    // 1,2,3 の順列を生成し、出力する
    do {
      count++;
      double d = 0.0;
      for(int i = 0; i < N - 1; i++) {
        int dx = x[v[i]] - x[v[i + 1]];
        int dy = y[v[i]] - y[v[i + 1]];
        d += pow(dx * dx + dy * dy, 0.5);
      }
      distance += d;
    } while (next_permutation(v.begin(), v.end()));

    cout << setprecision(14) << distance / count << endl;

    return 0;

  }
  ```
