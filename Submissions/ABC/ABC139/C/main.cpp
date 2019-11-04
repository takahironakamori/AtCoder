#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> H(N);
  for (int i = 0; i < N; i++) {
    cin >> H[i];
  }

  int count = 0;
  int max_ = 0;

  for (int i = 0; i < N; i++) {
    if (i != N - 1) {
      if (H[i+1] <= H[i]) {
        count++;
      } else {
        max_ = max(max_, count);
        count = 0;
      }
    } else {
      max_ = max(max_, count);
    }
  }

  cout << max_ << endl;

}
