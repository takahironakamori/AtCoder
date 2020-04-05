#include <bits/stdc++.h>
using namespace std;

vector<long long> divisor (long long N) {
  vector<long long> res;
  for (long i = 1; i * i <= N; i++) {
    if (N % i == 0) {
      res.push_back(i);
      if (i != N / i) {
        res.push_back(N / i);
      }
    }
  }
  return res;
}

long long digit(long long a) {
  long long result = 0;
  while (a > 0) {
    result++;
    a /= 10;
  }
  return result;
}

int main() {

  long long N;
  cin >> N;

  vector<long long> d = divisor(N);

  long long answer = 1LL<<60;

  for (int i = 0; i < d.size(); i++) {
    long long a_ = N / d[i];
    long long d_ = max(digit(d[i]), digit(a_));
    answer = min(d_, answer);
  }

  cout << answer << endl;

  return 0;

}
