#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> C(N);
  for (int i = 0; i < N; i++) {
    cin >> C[i];
  }

  sort(C.begin(), C.end());

  double answer = 0.0;

  for (int i = 0; i < N; i++) {
    int count = 0;
    for (int j = 0; j < N; j++) {
      if (i != j && C[i] % C[j] == 0) {
        count++;
      }
    }
    if (count % 2 == 0) {
      answer += (double) (count + 2) / (count * 2 + 2);
    } else {
      answer += 0.5;
    }
  }

  cout << setprecision(11) << answer << endl;

  return 0;

}
