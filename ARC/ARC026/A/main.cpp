#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, A, B;
  cin >> N >> A >> B;

  int countB = min(N, 5);
  int countA = max(0, N - countB);

  int ans = B * countB + A * countA;
  cout << ans << endl;

  return 0;

}
