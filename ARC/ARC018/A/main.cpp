#include <bits/stdc++.h>
using namespace std;

int main() {

  double H, B;
  cin >> H >> B;

  H /= 100;
  H *= H;

  double ans = B * H;

  printf("%.16f", ans);
  printf("\n");

  return 0;

}
