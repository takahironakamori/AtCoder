#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
// using mint = modint998244353;
// using mint =　modint1000000007;
// const int mod = 998244353;
// const ll INF = 1LL << 62;
// const int INF = 1001001001;

bool cmp(const P& a, const P& b) {
  if(a.first > b.first) {
    return true;
  }
  return false;
}

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M);
  rep(i, M) {
    cin >> A[i];
  }

  vector<string> S(N);
  rep(i, N) {
    cin >> S[i];
  }

  int maxScore = 0;
  vector<int> score(N);
  rep(i, N) {
    rep(j, M) {
      if(S[i][j] == 'o') {
        score[i] += A[j];
      }
    }
    score[i] += (i+1);
    maxScore = max(maxScore, score[i]);
  }

  vector<P> A2(M);
  rep(i, M) {
    A2[i] = make_pair(A[i], i);
  }
  sort(A2.begin(), A2.end(), cmp);

  rep(i, N) {
    if(maxScore == score[i]) {
      cout << 0 << endl;
    } else {
      int cnt = 0;
      rep(j, M) {
        if(S[i][A2[j].second] == 'x') {
          score[i] += A2[j].first;
          cnt++;
        }
        if(maxScore < score[i]) {
          cout << cnt << endl;
          break;
        }
      }
    }
  }

  return 0;
}
