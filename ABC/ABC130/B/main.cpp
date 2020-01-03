#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, X;
  cin >> N >> X;

  vector<int> D(N+1);

  D[0] = 0;

  for (int i = 0; i < N; i++) {
    int L;
    cin >> L;
    D[i+1] = D[i] + L;
  }

  int answer = 0;

  for (int i = 0; i <= N; i++) {
    if (D[i] <= X) {
      answer++;
    } else {
      break;
    }
  }

  cout << answer << endl;

}