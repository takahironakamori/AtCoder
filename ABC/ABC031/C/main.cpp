#include <bits/stdc++.h>
using namespace std;


int main() {

  int N;
  cin >> N;

  vector<int> a(N);
  for (int i = 0; i < N; i++) {
    cin >> a[i];
  }

  int answer = -100000000;

  for (int i = 0; i < N; i++) {

    int maxT = 0;
    int maxA = -100000000;

    for (int j = 0; j < N; j++) {

      if (i == j) {
        continue;
      }

      int start = j;
      int end = i + 1;

      if (i < j) {
        start = i;
        end = j + 1;
      }

      int scoreT = 0;
      int scoreA = 0;
      int count = 0;

      for (int k = start; k < end; k++) {
        if (count % 2 == 0) {
          scoreT += a[k];
        } else {
          scoreA += a[k];
        }
        count++;
      }

      if (maxA < scoreA) {
        maxA = scoreA;
        maxT = scoreT;
      }

    }

    answer = max(answer, maxT);

  }

  cout << answer << endl;

  return 0;

}
