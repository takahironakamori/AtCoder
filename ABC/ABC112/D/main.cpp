#include <bits/stdc++.h>
using namespace std;

vector<long> divisor(long N) {
  vector<long> res;
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

int main() {

  int N, M;
  cin >> N >> M;

  int d = M / N;
  
  vector<long> v = divisor(M);

  long answer = 0;

  for (int i = 0; i < v.size(); i++) {
    if (v[i] <= d) {
      answer = max(answer, v[i]);
    }
  }

  cout << answer << endl;

}