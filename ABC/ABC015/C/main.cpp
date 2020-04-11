#include <bits/stdc++.h>
using namespace std;

int N, K;
int T[5][5];

bool dfs (int num, int result) {

  if (num == N) {
    if (result == 0) {
      return true;
    } else {
      return false;
    }
  }

  for (int i = 0; i < K; i++) {
    if (dfs(num + 1, result ^ T[num][i])) {
      return true;
    }
  }

  return false;
}

int main() {

  cin >> N >> K;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < K; j++) {
      cin >> T[i][j];
    }
  }

  if (dfs(0,0)) {
    cout << "Found" << endl;
  } else {
    cout << "Nothing" << endl;
  }

  return 0;

}
