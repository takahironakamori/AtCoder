#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, K;
  cin >> N >> K;

  // td[2] = {1,3,4,2}
  vector<vector<int>> td(N);
  for (int i = 0; i < N; i++) {
    int t, d;
    cin >> t >> d;
    t--;
    td[t].push_back(d);
  }

  // p[i] = <美味しさ,最初か否か> に変える
  vector<pair<int,int>> p;
  for (int i = 0; i < N; i++) {
    if (0 < td[i].size()) {
      sort(td[i].begin(), td[i].end());
      for (int j = 0; j < td[i].size(); j++) {
        p.push_back(make_pair(td[i][j], j == (td[i].size() - 1)));
      }
    }
  }

  sort(p.begin(),p.end());

  // <美味しさ,0> を入れておき、抜き出す用
  // 小さいものから抜き出す
  priority_queue<int, vector<int>, greater<int>> que;

  // 選んだ種類の数
  int kind = 0;

  // 選んだすしの数
  int choose = 0;

  // 美味しさの合計
  long long sum = 0;

  // 答え
  long long answer = 0;

  // 美味しさ、次に最初か否かが大きいものから順番に足していく。
  for (int i = p.size() - 1; 0 <= i; i--) {

    int d = p[i].first;
    int v = p[i].second;
    sum += d;
    choose++;
    kind += v;

    if (!v) {
      que.push(d);
    }

    if (choose > K) {
      if (!que.size()) {
        break;
      }
      // 種類数が減らないもので美味しさが小さいものを引く
      sum -= que.top();
      que.pop();
      choose--;
    }

    if (choose == K) {
      answer = max(answer, sum +(long long) kind * kind);
    }

  }

  cout << answer << endl;

  return 0;

}
