#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  int sum = 0;
  int mx = 0;

  for (int i = 0; i < N; i++) {
    int L;
    cin >> L;
    sum += L;
    mx = max(mx, L);
  }

  if (mx < sum - mx) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

}