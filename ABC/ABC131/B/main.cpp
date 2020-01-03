#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, L;
  cin >> N >> L;

  int answer = 300;
  int sum = 0;

  for (int i = 1; i <= N; i++) {
    int l = L + i - 1;
    sum += l;
    answer = min(answer, abs(l));
  }

  if (sum < 0) {
    cout << sum + answer << endl;
  } else {
    cout << sum - answer << endl;
  }
}