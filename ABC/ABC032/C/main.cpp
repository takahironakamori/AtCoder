#include <bits/stdc++.h>
using namespace std;


int main() {

  int N, K;
  cin >> N >> K;

  vector<int> s(N);

  // 0があるか（true）否か（false）
  bool flg = false;

  for (int i = 0; i < N; i++) {
    cin >> s[i];
    if (s[i] == 0) {
      flg = true;
    }
  }

  if (flg) {
    cout << N << endl;
    return 0;
  }

  int answer = 0;
  int start = 0;
  int end = 0;
  long long current = 1;

  while (end <= N) {
    answer = max(answer, end - start);
    if (current * s[end] <= K) {
      current = current * s[end];
      end++;
    } else {
      if (start == end) {
        start++;
        end++;
      } else {
        current = current / s[start];
        start++;
      }
    }
  }

  cout << answer << endl;

  return 0;

}
