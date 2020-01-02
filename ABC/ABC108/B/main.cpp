#include <bits/stdc++.h>
using namespace std;

int main() {

  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;  
  
  int dx = 0;
  int dy = 0;

  if (x2 == x1) {
    dx = y2 - y1;
    cout << x2 - dx << " " << y2 << " " << x1 - dx << " " << y1 << endl;
  } else if (y2 == y1) {
    dy = x2 - x1;
    cout << x2 << " " << y2 + dy << " " << x1 << " " << y1 + dy << endl;
  } else {
    dx = y2 - y1;
    dy = x2 - x1;
    cout << x2 - dx << " " << y2 + dy << " " << x1 - dx << " " << y1 + dy << endl;
  }

}