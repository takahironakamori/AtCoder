#include <bits/stdc++.h>
using namespace std;

int main() {

  long long N, K;
  cin >> N >> K;

  vector<long long> A(N);

  for (int i = 0; i < N; i++) {
    cin >> A[i];
    A[i];
  }

  // ルート:root[i] -> i番目の移動先
  vector<int> root;

  // 通ったか否かを管理
  // 通った場合は、何番目に通ったかを記憶
  // 通っていない場合は、-1
  vector<int> visited(N + 1, -1);

  // 現在地点:1からスタートする
  int current = 1;

  // 同じ位置を通るまでループ
  while (visited[current] == -1) {

    // ルートに現在地点を追加
    root.push_back(current);

    // x番目に通った
    visited[current] = root.size();

    // 現在地点を更新
    current = A[current - 1];

  }

  // ループしている町の個数
  int roopSize = root.size() - visited[current] + 1;

  // ループするまでに移動する町の個数
  int noRoopSize = visited[current] - 1;

  if (K < noRoopSize) {
    // K がループするまでに移動する町の個数より小さい場合は
    // K 番目を出力
    cout << root[K] << endl;
  } else {
    // そうじゃない場合は、余りの位置
    K -= noRoopSize;
    K %= roopSize;

    cout << root[noRoopSize + K] << endl;
  }

  return 0;
}
