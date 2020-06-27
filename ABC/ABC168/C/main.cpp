#include <bits/stdc++.h>
using namespace std;

int main() {

  double PI = 3.14159265358979323846264338327950L;

  double A, B, H, M;
  cin >> A >> B >> H >> M;

  double angleH = 360 * H / 12;
  double angleM = 360 * M / 60;

  angleH += 30 * M / 60;

  double angle = angleH - angleM;

  double radian = angle * PI / 180.0;
  double answer = A * A + B * B - (2 * A * B * cosl(radian));

  printf("%.20f\n", sqrt(answer));

  return 0;

}
