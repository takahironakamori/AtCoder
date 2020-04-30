#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M;
  cin >> N >> M;

  priority_queue<int> que;
  for (int i = 0; i < N; i++) {
    int A;
    cin >> A;
    que.push(A);
  }

  for (int i = 0; i < M; i++) {
    int a = que.top();
    que.pop();
    a /= 2;
    que.push(a);
  }

  long long answer = 0;
  while(!que.empty()) {
    answer += que.top();
    que.pop();
  }

  cout << answer << endl;

  return 0;

}
