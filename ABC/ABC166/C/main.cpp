#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M;
  cin >> N >> M;

  vector<int> H(N);
  for (int i = 0; i < N; i++) {
    cin >> H[i];
  }

  vector<int> mx(N);
  for (int i = 0; i < M; i++) {
    int A, B;
    cin >> A >> B;
    --A;
    --B;
    mx[A] = max(H[B], mx[A]);
    mx[B] = max(H[A], mx[B]);
  }

  int answer = 0;

  for (int i = 0; i < N; i++) {
    if (mx[i] < H[i]) {
      answer++;
    }
  }

  cout << answer << endl;

  return 0;

}
