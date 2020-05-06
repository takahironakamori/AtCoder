#include <bits/stdc++.h>
using namespace std;

int N, M, Q;
vector<int> a;
vector<int> b;
vector<int> c;
vector<long long> d;

vector<int> v;
long long answer;

void dfs (vector<int> v) {

  if ((int) v.size() == N + 1) {
    long long ans = 0;
    for (int i = 0; i < Q; i++) {
      if ((v[b[i] - 1] - v[a[i] - 1]) == c[i]) {
        ans += d[i];
      }
    }
    answer = max(answer, ans);
    return;
  }

  v.push_back(v.back());
  while(v.back() <= M) {
    dfs(v);
    v.back()++;
  }

}

int main() {

  cin >> N >> M >> Q;

  a.resize(Q);
  b.resize(Q);
  c.resize(Q);
  d.resize(Q);

  for (int i = 0; i < Q; i++) {
    cin >> a[i] >> b[i] >> c[i] >> d[i];
  }

  v.push_back(1);
  dfs(v);

  cout << answer << endl;

  return 0;
}
