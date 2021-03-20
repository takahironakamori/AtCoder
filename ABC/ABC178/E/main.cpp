#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<long long> a(N);
  vector<long long> b(N);
  for (int i = 0; i < N; ++i) {
    long long x, y;
    cin >> x >> y;
    a[i] = x + y;
    b[i] = x - y;
  }

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  cout << max(abs(a[0] - a[N - 1]), abs(b[0] - b[N - 1])) << endl;

  return 0;

}
