#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, X, Y;
  cin >> N >> X >> Y;
  --X;
  --Y;

  vector<int> answer(N);
  int INF = 1000000007;

  for (int i = 0; i < N; i++) {
    vector<int> distance(N, INF);

    // BFSで距離を調べる
    queue<int> q;

    auto push = [&](int v, int d) {
      if (distance[v] != INF) {
        return;
      }
      distance[v] = d;
      q.push(v);
    };

    // スタート地点
    push(i,0);

    while(!q.empty()) {
      int v = q.front();
      q.pop();
      int d = distance[v];
      if (0 <= v - 1) {
        push(v - 1, d + 1);
      }
      if (v + 1 < N) {
        push(v + 1, d + 1);
      }
      // XとYをつなぐ線
      if (v == X) {
        push(Y, d + 1);
      }
      if (v == Y) {
        push(X, d + 1);
      }
    }
    for (int j = 0; j < N; j++) {
      answer[distance[j]]++;
    }
  }

  for (int i = 0; i < N; i++) {
    answer[i] /= 2;
  }

  for (int i = 1; i < N; i++) {
    cout << answer[i] << endl;
  }

  return 0;

}
