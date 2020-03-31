#include <bits/stdc++.h>
using namespace std;

int main() {

  int X;
  cin >> X;

  int a = (X / 500) * 1000;
  int b = (X % 500) / 5;
  a += b * 5;

  cout << a << endl;

  return 0;

}
