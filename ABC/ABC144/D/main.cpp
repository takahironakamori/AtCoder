#include <bits/stdc++.h>
using namespace std;

int main() {

  double a, b, x;
  cin >> a >> b >> x;

  double answer = 0.0;
  double rangle = 0.0;

  double wh = x / (a * a); 
  double dh = b - wh;

  if (dh <= wh) {

    rangle = atan2(dh * 2, a);
    answer = rangle * 180.0 / M_PI;

  } else {

    double ab = a * b;
    double x2 = 2 * x;
    double a2 = x2 / ab;
    rangle = atan2(a2, b);
    answer = rangle * 180.0 / M_PI;
    answer = 90 - answer;

  }

  cout << setprecision(12) << answer << endl; 

}