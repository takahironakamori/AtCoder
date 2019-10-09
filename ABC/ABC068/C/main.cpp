#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M;
  cin >> N >> M;

  vector<bool> start(N+1);
  vector<bool> goal(N+1);

  for (int i = 0; i < M; i++) {
    int a;
    int b;
    cin >> a >> b;
    if (a == 1) {
      start[b] = true;
    }
    if (b == N) {
      goal[a] = true;
    }
  }

  string result = "IMPOSSIBLE";

  for (int i = 0; i < N+1; i++) {
    if (start[i] && goal[i]) {
      result = "POSSIBLE";
      break;
    }
  }

  cout << result << endl;

}