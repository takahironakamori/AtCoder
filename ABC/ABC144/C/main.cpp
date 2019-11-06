#include <bits/stdc++.h>
using namespace std;

// Nの約数を配列で返す
vector<long long> divisor(long long N) {
  vector<long long> res;
  for (long long i = 1; i * i <= N; i++) {
    if (N % i == 0) {
      res.push_back(i);
      if (i != N / i) {
        res.push_back(N / i);
      }
    }
  }
  return res;
}

int main() {

  long long N;
  cin >> N;

  vector<long long> v = divisor(N);

  int l = v.size();
  if (l % 2 == 0) {
    cout << v[l - 1] + v[l - 2] - 2 << endl;
  } else {
    cout << (v[l - 1] * 2) - 2 << endl;
  }

}
