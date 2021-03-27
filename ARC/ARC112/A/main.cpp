#include <bits/stdc++.h>
using namespace std;

long long sum(long long a, long long b) {
  // 初項 a, 末項 b, 項数 b - a + 1
  // S_n = (a + b)(b - a + 1) / 2
  return (a + b) * (b - a + 1) / 2;
}

void f() {

  long long L, R;
  cin >> L >> R;

  long long minC = L;
  long long maxC = R - L;

  if (maxC < minC) {
    cout << 0 << endl;
  } else {
    long long a = R - maxC - L + 1;
    long long b = R - minC - L + 1;  
    cout << sum(a, b) << endl;
  }

}

int main() {
  
  int T;
  cin >> T;
  
  for (int i = 0; i < T; ++i) {
    f();
  }

  return 0;
}