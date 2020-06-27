#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> a(N);
  int sum = 0;
  for (int i = 0; i < N; i++) {
    cin >> a[i];
    sum = sum ^ a[i];
  }

  for (int i = 0; i < N; i++) {
    int ans = a[i] ^ sum;
    cout << ans << " ";
  }

  cout << endl;

  return 0;

}
