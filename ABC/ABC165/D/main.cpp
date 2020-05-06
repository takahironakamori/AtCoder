#include <bits/stdc++.h>
using namespace std;

int main() {

  long long A, B, N;
  cin >> A >> B >> N;

  long long x;
  x = min(N, B - 1);
  x %= B;

  A *= x;

  long long answer = (A - A % B) / B;
  cout << answer << endl;

  return 0;
}
