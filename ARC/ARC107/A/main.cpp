#include <bits/stdc++.h>
using namespace std;

long long mod = 998244353;

long long sum(long long a, long long b) {
  // 初項 a, 末項 b, 項数 b - a + 1
  // S_n = (a + b)(b - a + 1) / 2
  return (a + b) * (b - a + 1) / 2 % mod;
}

int main() {
  
  long long A, B, C;
  cin >> A >> B >> C;

  long long a = sum(1, A);
  long long b = sum(1, B);
  long long c = sum(1, C);

  long long ans = a * b % mod;
  ans = ans * c % mod;

  cout << ans << endl;

  return 0;
}