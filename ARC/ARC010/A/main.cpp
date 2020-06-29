#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M, A, B;
  cin >> N >> M >> A >> B;

  int ans = -1;

  for (int i = 0; i < M; i++) {

    int c;
    cin >> c;

    if (N <= A) {
      N += B;
    }

    if (N < c) {
      if (ans == -1) {
        ans = i + 1;
      }
    } else {
      N -= c;
    }

  }

  if (ans == -1) {
    cout << "complete" << endl;
  } else {
    cout << ans << endl;
  }
  return 0;

}
