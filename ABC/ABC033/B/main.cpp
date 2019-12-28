#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<pair<string, int>> town(N);

  int sum = 0;

  for (int i = 0; i < N; i++) {
    cin >> town[i].first >> town[i].second;
    sum += town[i].second;
  }

  string answer = "atcoder";

  for (int i = 0; i < N; i++) {
    if (sum / 2 < town[i].second) {
      answer = town[i].first;
      break;
    }
  }

  cout << answer << endl;

}