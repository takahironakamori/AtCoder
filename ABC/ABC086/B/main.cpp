#include <bits/stdc++.h>
using namespace std;

int main() {

  int a, b;
  cin >> a >> b;

  int v = 0;

  if (b < 10) {
    v = a * 10 + b;
  } else if (b != 100) {
    v = a * 100 + b;
  } else {
    v = a * 1000 + b;
  }

  int v2 = sqrt(v);

  if (v2 * v2 == v) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

}