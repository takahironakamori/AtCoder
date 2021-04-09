#include <bits/stdc++.h>
using namespace std;

/*
  5
  2 4 5
  1 3
*/

int main() {

  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; ++i) {
    cin >> A[i];
  }

  deque<int> que;
  for (int i = 0; i < N; ++i) {
    int p = lower_bound(que.begin(), que.end(), A[i]) - que.begin();
    if (p == 0) {
      que.push_front(A[i]);
    } else {
      que[p - 1] = A[i];
    }
  }

  cout << int(que.size()) << endl;
  return 0;

}