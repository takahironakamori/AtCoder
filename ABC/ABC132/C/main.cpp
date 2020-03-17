#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> d(N);
  for (int i = 0; i < N; i++) {
    cin >> d[i];
  }

  sort(d.begin(), d.end());

  int start = N / 2 - 1;
  int end = N / 2;

  int answer = d[end] - d[start];

  cout << answer << endl;

  return 0;

}
