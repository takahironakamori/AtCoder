#include <bits/stdc++.h>
using namespace std;

int main() {

  int R, C, K, N;
  cin >> R >> C >> K >> N;

  vector<int> r(N);
  vector<int> c(N);

  // 各行、各列に飴が何個あるのか
  vector<int> countCandyR(100010);
  vector<int> countCandyC(100010);

  for (int i = 0; i < N; i++) {
    int r_, c_;
    cin >> r_ >> c_;
    r[i] = r_ - 1;
    c[i] = c_ - 1;
    countCandyR[r[i]]++;
    countCandyC[c[i]]++;
  }

  // 飴がX個あるのは何行（何列）あるか
  vector<int> countRows(100010);
  vector<int> countColumns(100010);

  for (int i = 0; i < R; i++) {
    countRows[countCandyR[i]]++;
  }

  for (int i = 0; i < C; i++) {
    countColumns[countCandyC[i]]++;
  }

  long long answer = 0;

  for (int i = 0; i <= K; i++) {
    answer += (long long) countRows[i] * countColumns[K - i];
  }

  for (int i = 0; i < N; i++) {
    if (countCandyR[r[i]] + countCandyC[c[i]] == K) {
      answer--;
    }
    if (countCandyR[r[i]] + countCandyC[c[i]] == K + 1) {
      answer++;
    }
  }

  cout << answer << endl;

  return 0;

}
