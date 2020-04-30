### ABC141

# D - Powerful Discount Tickets

  [問題はこちら](https://atcoder.jp/contests/abc141/tasks/abc141_d)

## 発想

  A<sub>i</sub>から最も大きいものに割引券を使うのが最も有利である。<br>
  ただし、1回使うごとにA<sub>i</sub>から最も大きいものを探して割引する必要がある。<br>
  priority_queueを使う。
  

## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, M;
    cin >> N >> M;

    priority_queue<int> que;
    for (int i = 0; i < N; i++) {
      int A;
      cin >> A;
      que.push(A);
    }

    for (int i = 0; i < M; i++) {
      int a = que.top();
      que.pop();
      a /= 2;
      que.push(a);
    }

    long long answer = 0;
    while(!que.empty()) {
      answer += que.top();
      que.pop();
    }

    cout << answer << endl;

    return 0;

  }
  ```
