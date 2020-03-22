#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> X(N);
  vector<int> X2(N);
  for (int i = 0; i < N; i++) {
    cin >> X[i];
  }

  X2 = X;

  sort(X.begin(), X.end());

  // 中央値
  int center = X[N / 2 - 1];

  int answer1 = X[N / 2];
  int answer2 = center;

  for (int i = 0; i < N; i++) {
    if (X2[i] <= center) {
      // 中央値以下場合は中央値より1つ大きいものが回答
      cout << answer1 << endl;
    } else {
      // 中央値を超える場合は中央値が回答
      cout << answer2 << endl;
    }
  }

  return 0;

}
