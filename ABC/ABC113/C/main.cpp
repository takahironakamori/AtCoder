#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M;
  cin >> N >> M;

  vector<pair<int,int>> v(M);
  for (int i = 0; i < M; i++) {
    cin >> v[i].first >> v[i].second;
  }

  // 並び替え用に v を複製する
  vector<pair<int,int>> v2 = v;

  sort(v2.begin(),v2.end());

  // 市内順位を持つmap
  map<pair<int,int>, int> mp;

  int current = v2[0].first;
  int count = 0;

  for (int i = 0; i < M; i++) {
    if (current == v2[i].first) {
      count++;
    } else {
      current = v2[i].first;
      count = 1;
    }
    mp[v2[i]] = count;
  }

  for (int i = 0; i < M; i++) {
    printf("%06d", v[i].first);
    printf("%06d", mp[v[i]]);
    printf("\n");
  }

  return 0;

}
