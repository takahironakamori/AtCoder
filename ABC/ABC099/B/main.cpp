#include <bits/stdc++.h>
using namespace std;

int main() {

  int a, b;
  cin >> a >> b;

  int d = b - a;

  d = d * (d + 1) / 2;

  cout << d - b << endl;

}