#include <bits/stdc++.h>
using namespace std;

int N, M, Q;
vector<int> W, V, X;

void solve() {

  int L, R;
  cin >> L >> R;

  int ans = 0;

  vector<int> BOXES;
  for (int i = 0; i < L-1; ++i) {
    BOXES.push_back(X[i]);
  }
  for (int i = R; i < M; ++i) {
    BOXES.push_back(X[i]);
  }

  // 小さい箱にできるだけ大きい価値のものを入れる
  sort(BOXES.begin(), BOXES.end());

  vector<bool> used(N, false);
  for (int i = 0; i < int(BOXES.size()); ++i) {
    int vMax = -1;
    int iMax = -1;
    for (int j = 0; j < N; ++j) {
      if (used[j] == false) {
        if (W[j] <= BOXES[i]) {
          if (vMax < V[j]) {
            vMax = V[j];
            iMax = j;
          }
        }
      }
    }
    if (vMax != -1) {
      used[iMax] = true;
      ans += vMax;
    }

  }

  cout << ans << endl;

}

int main() {
  
  cin >> N >> M >> Q;

  W.resize(N);
  V.resize(N);
  X.resize(M);

  for (int i = 0; i < N; ++i) {
    cin >> W[i] >> V[i];
  }
  
  for (int i = 0; i < M; ++i) {
    cin >> X[i];
  }
  
  for (int i = 0; i < Q; ++i) {
    solve();
  }

  return 0;

}