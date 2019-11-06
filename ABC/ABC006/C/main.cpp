#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M;
  cin >> N >> M;

  if (N * 4 < M || M < N * 2) {
    cout << "-1 -1 -1" << endl;
  } else {
    if (N * 3 == M) {
      cout << "0 " << M / 3 << " 0" << endl;
    } else if (N * 3 < M) {
      int r = M - N * 3;
      cout << "0 " << N - r << " " << r << endl;
    } else {
      int r = N * 3 - M;
      cout << r << " " << N - r << " 0" << endl;
    }
  }

}