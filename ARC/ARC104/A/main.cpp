#include <bits/stdc++.h>
using namespace std;

/*
X + Y = A
X - Y = B

X = A - Y
X = B + Y

A - Y = B + Y
A - X = X - B

2Y = A - B
2X = A + B

Y = (A - B)/2
X = (A + B)/2
*/

int main() {

  int A, B;
  cin >> A >> B;

  cout << (A + B) / 2 << " " << (A - B) / 2 << endl;

  return 0;

}