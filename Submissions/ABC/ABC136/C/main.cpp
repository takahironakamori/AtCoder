#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> H(N);
  for (int i = 0; i < N; i++) {
    cin >> H[i];
  }

  string result = "Yes";
  for (int i = N - 1; 0 < i; i--) {
    if (H[i] < H[i - 1]) {
      if (H[i - 1] - H[i] <= 1) {
        H[i - 1] -= H[i - 1] - H[i];
      } else {
        result = "No";
        break;
      }
    }
  }

  cout << result << endl;

}