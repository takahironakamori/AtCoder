#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;
  
  int sum = 0;

  vector<int> S(N);
  for (int i = 0; i < N; i++) {
    cin >> S[i];
    sum += S[i];
  }

  sort(S.begin(), S.end());

  if (sum % 10 == 0) {
    for (int i = 0; i < N; i++) {
      if (S[i] % 10 != 0) {
        sum = sum - S[i];
        break;
      }
    }
    if (sum % 10 == 0) {
      sum = 0;
    }
  }

  cout << sum << endl;

}