#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M;
  cin >> N >> M;

  int L = 0;
  int R = N;
  for (int i = 0; i < M; i++) {
    int L_, R_;
    cin >> L_ >> R_;
    L = max(L, L_);
    R = min(R, R_);
  }

  if (L <= R) {
    cout << R - L + 1 << endl;
  } else {
    cout << 0 << endl;
  }

  return 0;

}
