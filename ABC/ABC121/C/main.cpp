#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M;
  cin >> N >> M;

  vector<pair<int,int>> store(N);
  for (int i = 0; i < N; i++) {
    cin >> store[i].first >> store[i].second;
  }

  sort(store.begin(), store.end());

  long long answer = 0;

  int current = 0;
  while (0 < M) {
    answer += (long long) store[current].first * min(M, store[current].second);
    M -= store[current].second;
    current++;
  }

  cout << answer << endl;

  return 0;

}
