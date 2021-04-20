#include <bits/stdc++.h>
using namespace std;

int N;
vector<vector<int>> edges;
vector<int> A;
vector<int> B;
vector<int> depth;
vector<long long> dp;

// 深さを求める
void f(int a, int d) {
  depth[a] = d;
  for (int i = 0; i < int(edges[a].size()); ++i) {
    int next = edges[a][i];
    if (depth[next] == -1) {
      f(next, d+1);
    }
  }
}

// いもす法的
void imos(int a, long long current) {
  current += dp[a];
  dp[a] = current;
  for (int i = 0; i < int(edges[a].size()); ++i) {
    int next = edges[a][i];
    if (depth[a] < depth[next]) {
      imos(next, current);
    }
  }
}

int main() {

  cin >> N;
  edges.resize(N);
  A.resize(N-1);
  B.resize(N-1);
  depth.resize(N, -1);
  dp.resize(N);

  for (int i = 0; i < N-1; ++i) {
    cin >> A[i] >> B[i];
    A[i]--;
    B[i]--;
    edges[A[i]].push_back(B[i]);
    edges[B[i]].push_back(A[i]);
  }

  f(0,0);

  int Q;
  cin >> Q;
  for (int i = 0; i < Q; ++i) {
    
    int t, e, x;
    cin >> t >> e >> x;
    e--;
    
    int ae;
    int be;
    if (t == 1) {
      ae = A[e];
      be = B[e];
    } else {
      ae = B[e];
      be = A[e];
    }

    // 通る方が上、通らない方が下のとき
    if (depth[ae] < depth[be]) {
      // 根に足す
      dp[0] += x;
      // 通らない方を引く
      dp[be] -= x;
    }
    // 通る方が下のとき 
    else {
      dp[ae] += x;
    }

  }

  imos(0,0);

  for (int i = 0; i < N; ++i) {
    cout << dp[i] << endl;
  }

  return 0;

}