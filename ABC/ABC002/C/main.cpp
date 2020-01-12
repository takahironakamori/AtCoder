#include <bits/stdc++.h>
using namespace std;

 
int main() {

  int x1, y1, x2, y2, x3, y3;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

  int a = x2 - x1;
  int b = y2 - y1;
  int c = x3 - x1;
  int d = y3 - y1;

  // |ad - bc| / 2
  double answer = (double) abs(a * d - b * c) / 2;

  printf("%.16f", abs(answer));
  printf("\n");

}