#include <bits/stdc++.h>
using namespace std;

int mx = 1505;
int H, W, N, M;

vector<vector<bool>> light(mx, vector<bool>(mx));
vector<vector<bool>> wall(mx, vector<bool>(mx));
vector<vector<bool>> status(mx, vector<bool>(mx));
vector<vector<bool>> visited(mx, vector<bool>(mx));
vector<vector<bool>> memo(mx, vector<bool>(mx));

vector<int> dx = {-1, 0, 1, 0};
vector<int> dy = {0, -1, 0, 1};

bool check(int i, int j, int k) {
  if (j < 0 || k < 0 || H <= j || W <= k) {
    return false;
  }
  if (wall[j][k]) {
    return false;
  }
  if (light[j][k]) {
    return true;
  }
  if (visited[j][k]) {
    return memo[j][k];
  }
  visited[j][k] = true;
  return memo[j][k] = check(i, j + dx[i], k + dy[i]);
}

int main() {

  cin >> H >> W >> N >> M;

  for (int i = 0; i < N; ++i) {
    int A, B;
    cin >> A >> B;
    A--;
    B--;
    light[A][B] = true;
  }

  for (int i = 0; i < M; ++i) {
    int C, D;
    cin >> C >> D;
    C--;
    D--;
    wall[C][D] = true;
  }
  
  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < H; ++j) {
      for (int k = 0; k < W; ++k) {
        visited[j][k] = false;
      }
    }

    for (int j = 0; j < H; ++j) {
      for (int k = 0; k < W; ++k) {
        if (check(i, j, k)) {
          status[j][k] = true;
        }
      }
    }
  }

  int ans = 0;
  for (int i = 0; i < H; ++i) {
    for (int j = 0; j < W; ++j) {
      if (status[i][j]) {
        ans++;
      }
    }
  }  

  cout << ans << endl;

  return 0;

}