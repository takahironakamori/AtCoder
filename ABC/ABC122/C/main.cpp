#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, Q;
  cin >> N >> Q;

  string S;
  cin >> S;

  vector<pair<int, int>> p(Q);

  for (int i = 0; i < Q; i++) {
    int a,b;
    cin >> a >> b;
    p[i] = make_pair(a, b);
  }

  vector<int> v(N+1);

  v[0] = 0;
  v[1] = 0;

  for (int i = 1; i <= N; i++) {
    if (S[i - 1] == 'A' && S[i] == 'C') {
      v[i + 1] = v[i] + 1;
    } else {
      v[i + 1] = v[i];
    }
  }

  for (int i = 0; i < Q; i++) {
    cout << v[p[i].second] - v[p[i].first] << endl;
  }

}