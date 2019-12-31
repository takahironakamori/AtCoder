#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M;
  cin >> N >> M;

  vector<int> count(N+1);
  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    count[a]++;
    count[b]++;
  }

  for (int i = 1; i <= N; i++) {
    cout << count[i] << endl;
  }

}