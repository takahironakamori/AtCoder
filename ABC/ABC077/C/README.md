### ABC077

# C - Snuke Festival

  [問題はこちら](https://atcoder.jp/contests/abc077/tasks/arc084_a)


## 発想

  N の平方根を切り捨てで求め、その値を 2 乗する。<br>


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
      cin >> A[i];
    }

    vector<int> B(N);
    for (int i = 0; i < N; i++) {
      cin >> B[i];
    }

    vector<int> C(N);
    for (int i = 0; i < N; i++) {
      cin >> C[i];
    }

    sort(A.begin(), A.end());
    sort(C.begin(), C.end());

    long long answer = 0;

    for (int i = 0; i < N; i++) {
      long long a = lower_bound(A.begin(), A.end(), B[i]) - A.begin();
      long long c = N - (upper_bound(C.begin(), C.end(), B[i]) - C.begin());
      answer += a * c;
    }

    cout << answer << endl;

    return 0;

  }
  ```
