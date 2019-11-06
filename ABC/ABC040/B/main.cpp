#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  int ans = 999999;

  for (int i = 1; i <= n; i++) {
    int a1 = n / i;
    int a2 = n % i;
    ans = min(ans, abs(a1 - i) + a2);
  }

  cout << ans << endl;

}