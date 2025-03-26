#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
// using mint = modint998244353;
// using mint = modint1000000007;
// const int mod = 1000000007;
// const ll INF = 1LL << 62;
const int INF = 1001001001;



int main() {
  int a;
  cin >> a;
  int N;
  cin >> N;

  vector<vector<int>> graph(1000010);
  vector<int> dist(1000010, INF);

  for(int i = 1; i < 1000000; i++) {
    if((ll) i * a <= 1000000) {
      graph[i].push_back(i * a);
    }

    string s = to_string(i);
    if(s.back() == '0') {
      continue;
    }

    s.insert(begin(s), s.back());
    s.pop_back();

    int n2 = stoi(s);
    if(n2 <= 1000000) {
      graph[i].push_back(n2);
    }
  }

  deque<int> que;
  que.push_back(1);
  dist[1] = 0;

  while(!que.empty()) {
    int c = que.front();
    que.pop_front();
    int d = dist[c];
    for(auto i:graph[c]) {
      if(d + 1 < dist[i]) {
        dist[i] = d + 1;
        que.push_back(i);
      }
    }
  }

  if(dist[N] == INF) {
    cout << -1 << endl;
  } else {
    cout << dist[N] << endl;
  }
  return 0;
}