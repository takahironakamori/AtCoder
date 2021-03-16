#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<pair<int, int>> AB;
int K;
vector<vector<int>> CD;
int ans = 0;

void dfs (map<int,int> mp, int current) {

  if (current == K) {
    int total = 0;
    for (int i = 0; i < M; ++i) {
      int A = AB[i].first;
      int B = AB[i].second;
      if (0 < mp[A] && 0 < mp[B]) {
        total++;
      }
    }
    ans = max(ans, total);
    return;
  }
  
  mp[CD[current][0]]++;

  dfs(mp, current + 1);

  mp[CD[current][0]]--;
  mp[CD[current][1]]++;

  dfs(mp, current + 1);

}


int main() {

  cin >> N >> M;

  AB.resize(M);
  for (int i = 0; i < M; ++i) {
    int A, B;
    cin >> A >> B;
    AB[i] = make_pair(A, B);
  }

  cin >> K;

  CD.resize(K,vector<int>(2));

  for (int i = 0; i < K; ++i) {
    cin >> CD[i][0] >> CD[i][1];
  }
  
  map<int, int> mp;
  
  dfs(mp ,0);

  cout << ans << endl;

  return 0;

}