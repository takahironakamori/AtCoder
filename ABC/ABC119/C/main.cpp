#include <bits/stdc++.h>
using namespace std;

int N, A, B, C;
vector<int> l;
int answer;

void dfs(int current, int mpA, int mpB, int mpC, int lengthA, int lengthB, int lengthC) {

  if (current == N) {
    // lengthA,B,C は 0 ではダメ
    if (lengthA != 0 && lengthB != 0 && lengthC != 0 ) {
      int c_ = max(0, mpA - 1) + max(0, mpB - 1) + max(0, mpC - 1);
      int cost_ = abs(A - lengthA) + abs(B - lengthB) + abs(C - lengthC) + c_ * 10;
      answer = min(answer, cost_);
    }
    return;
  }

  // l[current] を A, B, C のどれにも使わずに次へ
  dfs(current + 1, mpA, mpB, mpC, lengthA, lengthB, lengthC);

  // l[current] を A に使って次へ
  dfs(current + 1, mpA + 1, mpB, mpC, lengthA + l[current], lengthB, lengthC);

  // l[current] を B に使って次へ
  dfs(current + 1, mpA, mpB + 1, mpC, lengthA, lengthB + l[current], lengthC);

  // l[current] を C に使って次へ
  dfs(current + 1, mpA, mpB, mpC + 1, lengthA, lengthB, lengthC + l[current]);

  return;
}

int main() {

  cin >> N >> A >> B >> C;

  l.resize(N);
  for (int i = 0; i < N; i++) {
    cin >> l[i];
  }

  answer = 1000000000;

  dfs(0, 0, 0, 0, 0, 0, 0);

  cout << answer << endl;

  return 0;

}
