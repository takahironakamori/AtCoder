#include <bits/stdc++.h>
using namespace std;

int W, H, N;

// 座標
vector<int> x, y;

// 重複削除した座標（座標圧縮用）
vector<int> xs, ys;

// dp[i][j][k][l]:= 左下を(i,j)、右上を(k,l)とした長方形領域が残った際の最適解
// 座標圧縮すれば上下左右の最大 30 になる
int dp[32][32][32][32];

int f (int x1, int y1, int x2, int y2) {

  // 参照渡し
  int& res = dp[x1][y1][x2][y2];

  if (res != -1) {
    return res;
  }
  res = 0;

  for (int i = 0; i < N; i++) {

    // 金塊回収装置が長方形の外側の場合は次の金塊回収装置をみる
    if (x[i] <= x1 || x2 <= x[i] || y[i] <= y1 || y2 <= y[i]) {
      continue;
    }

    // 取ることができる金塊の数を計算する
    int t = xs[x2] - xs[x1] + ys[y2] - ys[y1] - 3;

    // 区切られた部分内に他の金塊回収装置があるか否かを再帰で確認する
    t += f(x1, y1, x[i], y[i]);
    t += f(x1, y[i], x[i], y2);
    t += f(x[i], y1, x2, y[i]);
    t += f(x[i], y[i], x2, y2);

    // t の最大値が答え
    res = max(res, t);
  }

  return res;
}

int main() {

  cin >> W >> H >> N;

  x.resize(N);
  y.resize(N);
  xs.resize(N+2);
  ys.resize(N+2);
  for (int i = 0; i < N; i++) {
    cin >> x[i] >> y[i];
    xs[i] = x[i];
    ys[i] = y[i];
  }

  xs[N] = W + 1;
  ys[N] = H + 1;

  sort(xs.begin(), xs.end());
  sort(ys.begin(), ys.end());

  // xs と ys の重複要素をなくす
  xs.erase(unique(xs.begin(), xs.end()), xs.end());
  ys.erase(unique(ys.begin(), ys.end()), ys.end());

  // xs と ys を使って x と y を座標圧縮する
  for (int i = 0; i < N; i++) {
    x[i] = lower_bound(xs.begin(), xs.end(), x[i]) - xs.begin();
    y[i] = lower_bound(ys.begin(), ys.end(), y[i]) - ys.begin();
  }

  // dp を初期化する
  fill((int*)dp, (int*)dp+32*32*32*32, -1);

  cout << f(0, 0, N+1, N+1) << endl;

  return 0;

}
