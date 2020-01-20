#include <bits/stdc++.h>
using namespace std;

int main() {
 
  int N;
  cin >> N;

  vector<int> P(N);
  for (int i = 0; i < N; i++) {
    cin >> P[i];
  }

  int answer = 1;
  int current = P[0];
  for (int i = 1; i < N; i++) {
    if (P[i] < current) {
      answer++;
      current = P[i];
    }
  }

  cout << answer << endl;

}