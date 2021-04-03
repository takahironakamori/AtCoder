#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int N, K;
  cin >> N >> K;

  vector<int> V(N);
  for (int i = 0; i < N; ++i) {
    cin >> V[i];
  }

  long long ans = 0;
  
  for (int A = 0; A <= K; ++A) {
    for (int B = 0; B <= K - A; ++B) {

      if (N < A + B) {
        continue;
      }

      long long v = 0;
      vector<long long> selected;

      for (int i = 0; i <= A; ++i) {
        if (i != 0) {
          v += V[i - 1];
          selected.push_back(V[i - 1]);
        }
      }

      for (int i = 0; i <= B; ++i) {
        if (i != 0) {
          v += V[N - i];
          selected.push_back(V[N - i]);
        }
      }
      
      sort(selected.begin(), selected.end());
      int count = min(K - A - B, A + B);
      long long d = 0;
      for (int i = 0; i <= count; ++i) {
        if (i != 0) {
          d += selected[i - 1];
        }
        ans = max(ans, v - d);
      }

    }
  }

  cout << ans << endl;
  
  return 0;

}