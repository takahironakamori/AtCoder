### ABC005

# C - おいしいたこ焼きの売り方

  [問題はこちら](https://atcoder.jp/contests/abc005/tasks/abc005_3)

- 発想<br>
  後ろから考える。<br>
  B<sub>M</sub> のお客さんが食べることができるのは、B<sub>M</sub> - T から B<sub>M</sub> まで。<br>
  この範囲内の A<sub>i</sub>があればいい。<br>
  ここでの A<sub>i</sub> についても大きい順から調べていく。<br>
  B より先に A が調べ終わるとたこ焼きを割り当てることができないので no となる。s

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int T, N;
    cin >> T >> N;

    deque<int> A;
    for (int i = 0; i < N; i++) {
      int a;
      cin >> a;
      A.push_back(a);
    }

    int M;
    cin >> M;

    vector<int> B(M);
    for (int i = 0; i < M; i++) {
      cin >> B[i];
    }

    while (0 < M) {
      if (0 < A.size()) {
        int a = A.back();
        if (B[M - 1] - T <= a && a <= B[M - 1]) {
          A.pop_back();
          M--;
        } else {
          A.pop_back();
        }
      } else {
        cout << "no" << endl;
        return 0;
      }
    }

    cout << "yes" << endl;
    return 0;

  }
  ```
