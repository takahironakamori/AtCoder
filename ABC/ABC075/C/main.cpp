#include <bits/stdc++.h>
using namespace std;

int N, M;

int a[50];
int b[50];

bool graph[50][50];
bool visited[50];

void dfs(int v) {

  visited[v] = true;

  for (int i = 0; i < N; i++) {

    // 繋がっていない場合は次の頂点へ
    if (graph[v][i] == false) {
      continue;
    }

    // すでに訪問済みの頂点の場合は次の頂点へ
    if (visited[i] == true) {
      continue;
    }

    // 繋がっていて、訪問済みじゃない場合は、次の頂点に継続してチェックする
    dfs(i);

  }
}

int main() {

  cin >> N >> M;

  for (int i = 0; i < M; i++) {
    cin >> a[i] >> b[i];
    a[i]--; b[i]--;
    graph[a[i]][b[i]] = true;
    graph[b[i]][a[i]] = true;
  }

  int answer = 0;

  for (int i = 0; i < M; i++) {

    // 頂点を繋がっていないことにする
    graph[a[i]][b[i]] = false;
    graph[b[i]][a[i]] = false;

    // 訪問状況をクリア
    for (int j = 0; j < N; j++) {
      visited[j] = false;
    }

    dfs(0);

    bool flg = false;

    // 訪問できていない頂点があれば辺iは橋である
    for (int j = 0; j < N; j++) {
      if (visited[j] == false) {
        flg = true;
      }
    }

    if (flg) {
      answer++;
    }

    // 戻す
    graph[a[i]][b[i]] = true;
    graph[b[i]][a[i]] = true;

  }

  cout << answer << endl;

  return 0;

}
