#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, K;
  cin >> N >> K;

  vector<int> l(N);
  for (int i = 0; i < N; i++) {
    cin >> l[i];
  }

  sort(l.begin(), l.end());

  int answer = 0;

  for (int i = N - 1; N - K <= i; i--) {
    answer += l[i];
  }

  cout << answer << endl;

}