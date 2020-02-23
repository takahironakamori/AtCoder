#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, K;
  cin >> N >> K;

  vector<int> h(N);
  for(int i = 0; i < N; i++) {
    cin >> h[i];
  }

  sort(h.begin(), h.end(), std::greater<int>());

  int answer = 1000000010;

  for (int i = 0; i < N - K + 1; i++) {
    answer = min(answer, h[i] - h[i + K - 1]);
  }

  cout << answer << endl;

  return 0;

}
