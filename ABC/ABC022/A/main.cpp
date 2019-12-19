#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, S, T;
  cin >> N >> S >> T;

  int W;
  cin >> W;

  int answer = 0;

  if (S <= W && W <= T) {
    answer++;
  }

  for (int i = 0; i < N - 1; i++) {

    int A;
    cin >> A;
    W += A;

    if (S <= W && W <= T) {
      answer++;
    }

  }

  cout << answer << endl;

}