#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<long long> answer(N + 1);

  answer[0] = 2;
  answer[1] = 1;

  for (int i = 2; i <= N; i++) {
    answer[i] = answer[i - 1] + answer[i - 2];
  }

  cout << answer[N] << endl;

}