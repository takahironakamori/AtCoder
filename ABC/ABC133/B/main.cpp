#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, D;
  cin >> N >> D;

  vector<vector<int>> X(N,vector<int>(D));

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < D; j++) {
      cin >> X[i][j];
    }
  }

  int answer = 0;

  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      vector<int> y = X[i];
      vector<int> z = X[j];
      int d = 0;
      for (int k = 0; k < D; k++) {
        d += abs(y[k] - z[k]) * abs(y[k] - z[k]);
      }
      double s = (double) sqrt(d);
      if (floor(s) * floor(s) == d) {
        answer++;
      }
    }
  }
  
  cout << answer << endl;

}