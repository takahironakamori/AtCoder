#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, K;
  cin >> N >> K;

  int answer = 1;

  for (int i = 0; i < N; i++) {
    if (answer < K) {
      answer *= 2;
    } else {
      answer += K;
    }
  }

  cout << answer << endl;

}