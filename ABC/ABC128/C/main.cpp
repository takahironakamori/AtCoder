#include <bits/stdc++.h>
using namespace std;

int main() {
 
  int N, M;
  cin >> N >> M;

  vector<vector<int>> v(M);
  for (int i = 0; i < M; i++) {
    int k;
    cin >> k;
    v[i].resize(k);
    for (int j = 0; j < k; j++) {
      cin >> v[i][j];
      v[i][j] -= 1;
    }
  }

  vector<int> p(M);
  for (int i = 0; i < M; i++) {
    cin >> p[i];
  }

  int answer = 0;
  for (int i = 0; i < (1 << N); i++) {
    bool validate = true;
    for (int j = 0; j < M; j++) {
      int c = 0;
      for (int k = 0; k < v[j].size(); k++) {
        if ((i >> v[j][k]) & 1) {
          c++;
        }
      }
      if ((c % 2) != p[j]) {
        validate = false;
      }
    }
    if (validate) {
      answer++;
    }
  }

  cout << answer << endl;

}