#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, K;
  cin >> N >> K;

  int answer = 1;

  while (K <= N) {
    N = N / K;
    answer++;
  }

  cout << answer << endl;

  return 0;

}
