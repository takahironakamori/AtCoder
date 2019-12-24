#include <bits/stdc++.h>
using namespace std;

int main() {
 
  int x, y;
  cin >> x >> y;
  
  int X;
  int Y;

  if (x == 2) {
    X = 3; 
  } else if (x == 4 || x == 6 || x == 9 || x == 11) {
    X = 2; 
  } else {
    X = 1; 
  }

  if (y == 2) {
    Y = 3; 
  } else if (y == 4 || y == 6 || y == 9 || y == 11) {
    Y = 2; 
  } else {
    Y = 1; 
  }

  if (X == Y) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

}