#include <bits/stdc++.h>
using namespace std;

int main() {
  
  long long B, C;
  cin >> B >> C;

  long long bRight = B;
  if (0 < C - 2) {
    bRight += (C - 2) / 2;
  }
  long long bLeft = B - (C / 2);

  long long cRight = 0 - B + (C - 1) / 2;
  long long cLeft = 0 - B - (C - 1) / 2;

  long long ans = bRight - bLeft + 1;
  ans += cRight - cLeft + 1;

  ans -= max(0ll, min(bRight, cRight) - max(bLeft, cLeft) + 1);

  cout << ans << endl;

  return 0;

}