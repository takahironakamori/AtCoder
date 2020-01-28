#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, K;
  cin >> N >> K;

  vector<int> H(N);
  for (int i = 0; i < N; i++) {
    cin >> H[i];
  }

  sort(H.begin(), H.end(), std::greater<int>());

  long long answer = 0;

  for (int i = K; i < N; i++) {
    answer += H[i];
  }

  cout << answer << endl;

}
