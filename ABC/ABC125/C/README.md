### ABC125

# C - GCD on Blackboard

  [問題はこちら](https://atcoder.jp/contests/abc125/tasks/abc125_c)


- 発想<br>
  N 個の整数から 1 つの整数をのぞいたときの最大公約数が回答となる。<br>
  12, 15, 18 で考える。<br>
  左から順番に最大公約数を計算すると、<br>
  {12, 3, 3} となる。<br>
  また、右から順番に最大公約数を計算すると、<br>
  {3, 3, 18} となる（並びを逆にしている）。
  12 をのぞいたときの最大公約数は、右から 2 番目までの最大公約数 3 となる。<br>
  18 をのぞいたときの最大公約数は、左から 2 番目までの最大公約数 3 となる。<br>
  15 をのぞいたときの最大公約数は、左から 1 番目までの最大公約数 12 と右から 1 番目の最大公約数 18 の最大公約数 6 となる。<br>
  これらの最大が回答となる。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int gcd(int a, int b) {
    if (b == 0) {
      return a;
    }
    return gcd(b, a % b);
  }

  int main() {

    int N;
    cin >> N;

    vector<int> A(N);

    // 左から順番に計算したGCD
    vector<int> L(N);
    for (int i = 0; i < N; i++) {
      cin >> A[i];
      if (i == 0) {
        L[i] = A[i];
      } else {
        L[i] = gcd(L[i - 1], A[i]);
      }
    }

    // 右から順番に計算したGCD
    vector<int> R(N);
    for (int i = N - 1; 0 <= i; i--) {
      if (i == N - 1) {
        R[i] = A[i];
      } else {
        R[i] = gcd(R[i + 1], A[i]);
      }
    }

    // | L[i-1] | i | R[i+1] |
    int answer = 0;
    for (int i = 0; i < N; i++) {
      if (i == 0) {
        answer = max(answer, R[i + 1]);
      } else if(i == N - 1) {
        answer = max(answer, L[i - 1]);
      } else {
        answer = max(answer, gcd(L[i - 1],R[i + 1]));
      }
    }

    cout << answer << endl;

    return 0;

  }
  ```    
