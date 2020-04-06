### ABC052

# C - Factors of Factorial

  [問題はこちら](https://atcoder.jp/contests/abc052/tasks/arc067_a)

## 発想

  N!を普通に計算すると桁が溢れる。<br>
  xを素因数分解し、素因数がキー、乗数が値のmapで計算する。<br>
  xの約数の個数は、（ある素因数の乗数+1)×(別の素因数の乗数+1)...となる。<br>


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  map<long long, long long> prime_factor(long long N) {
    map<long long, long long> res;
    for (long i = 2; i * i <= N; i++) {
      while (N % i == 0) {
        res[i]++;
        N /= i;
      }
    }
    if (N != 1) {
      res[N] = 1;
    }
    return res;
  }

  int main() {

    int N;
    cin >> N;

    map<long long, long long> mp;

    for (int i = 1; i <= N; i++){
      map<long long, long long> m = prime_factor(i);
      for (auto item: m) {
        mp[item.first] += item.second;
      }
    }

    long long answer = 1;

    for (auto item: mp) {
      answer *= (item.second + 1);
      answer %= 1000000007;
    }

    cout << answer <<  endl;

    return 0;

  }
  ```
