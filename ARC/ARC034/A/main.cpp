#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  double ans = 0;

  for (int i = 0; i < N; i++) {
    double a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    double p = a + b + c + d + e * 110 / 900;
    ans = max(ans, p);
  }

  printf("%.16f", ans);
  printf("\n");
  return 0;

}
