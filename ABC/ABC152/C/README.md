### ABC152

# C - Low Elements

  [問題はこちら](https://atcoder.jp/contests/abc152/tasks/abc152_c)


- 発想<br>
  入力から受け取った数列から、p\[0] > p\[i] > p\[i+n] とだんだんと少なくなっていく数列を作った場合の要素数が回答となる。
  

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

    int answer = 1;
    int current = P[0];
    for (int i = 1; i < N; i++) {
      if (P[i] < current) {
        answer++;
        current = P[i];
      }
    }

    cout << answer << endl;

  }
  ```
    