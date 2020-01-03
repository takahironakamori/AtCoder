#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> W(N);
  int sum = 0;
  for (int i = 0; i < N; i++) {
    cin >> W[i];
    sum += W[i];
  }

  int answer = 1000000;
  int current = 0;
  for (int i = 0; i < N - 1; i++) {
    current += W[i];
    answer = min(answer, abs((sum - current) - current));
  }

  cout << answer << endl;

}