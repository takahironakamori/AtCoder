#include <bits/stdc++.h>
using namespace std;

struct A {
  vector<vector<int>> a;
  vector<long long> b;
  A(const vector<vector<int>>& _a = {{1,0},{0,1}}, const vector<long long>& _b = {0,0}):a(_a), b(_b) {}
  A operator*(const A& x) const {
    A res({{0,0},{0,0}});
    for (int i = 0; i < 2; ++i) {
      for (int j = 0; j < 2; ++j) {
        for (int k = 0; k < 2; ++k) {
          res.a[i][j] += x.a[i][k] * a[k][j];
        }
      }
    }
    res.b = A(x.a)*b;
    for (int i = 0; i < 2; ++i) {
      res.b[i] += x.b[i];
    }
    return res;
  }
  vector<long long> operator*(const vector<long long>& x) const {
    vector<long long> res = b;
    for (int i = 0; i < 2; ++i) {
      for (int j = 0; j < 2; ++j) {
        res[i] += a[i][j] * x[j];
      }
    }
    return res;
  }
};


int main() {

  int N;
  cin >> N;

  vector<vector<long long>> p(N, vector<long long>(2));
  for (int i = 0; i < N; ++i) {
    cin >> p[i][0] >> p[i][1];
  }

  int M;
  cin >> M;

  vector<A> d(1);
  for (int i = 0; i < M; ++i) {
    int op;
    cin >> op;
    A x;
    if (op == 1) {
      x = A({{0,1}, {-1,0}});
    } else if (op == 2) {
      x = A({{0,-1}, {1,0}});
    } else {
      int p;
      cin >> p;
      if (op == 3) {
        x = A({{-1,0},{0,1}}, {2 * p, 0});
      } else {
        x = A({{1,0},{0,-1}}, {0, 2 * p});
      }
    }
    A y = d.back();
    d.push_back(y * x);
  }

  int Q;
  cin >> Q;
  for (int i = 0; i < Q; ++i) {
    int A, B;
    cin >> A >> B;
    --B;
    vector<long long> ans = d[A]*p[B];
    printf("%lld %lld\n", ans[0], ans[1]);
  }

  return 0;

}