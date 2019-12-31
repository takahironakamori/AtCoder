#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> a(N+1);
  for (int i = 1; i <= N; i++) {
    cin >> a[i];
  }

  bool flg = true;
  int current = 1;
  int answer = 0;

  while (flg) {

    answer++;
    current = a[current];

    if (current == 2) {
      flg = false;
    }

    if (N < answer) {
      answer = -1;
      flg = false;
    }
  }

  cout << answer << endl;

}