#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> d(N);
  for (int i = 0; i < N; i++) {
    cin >> d[i];
  }
  
  int answer = 0;

  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      answer += d[i] * d[j];
    }
  }

  cout << answer << endl;
  
}