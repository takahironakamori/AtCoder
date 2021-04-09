#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, K;
  cin >> N >> K;

  int maxM = (N - 1) * (N - 2) / 2;
  if (maxM < K) {
    cout << -1 << endl;
    return 0;
  }

  // star のグラフにする
  vector<pair<int, int>> path;
  for (int i = 0; i < N - 1; ++i) {
    path.push_back(make_pair(i + 1, N));
  }

  // 完全グラフにするための辺を全て作っておく
  vector<pair<int, int>> pathList;
  for (int i = 0; i < N - 1; ++i) {
    for (int j = 0; j < i; ++j) {
      pathList.push_back(make_pair(i+1, j+1));
    }
  }

  int count = maxM - K;
  for (int i = 0; i < count; ++i) {
    path.push_back(pathList[i]);
  }

  cout << path.size() << endl;
  for (int i = 0; i < int(path.size()); ++i) {
    cout << path[i].first << " " << path[i].second << endl;
  }

  return 0;

}