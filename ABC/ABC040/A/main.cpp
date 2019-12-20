#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, x;
  cin >> n >> x;

  if (x <= n / 2) {
    cout << x - 1 << endl;
  } else {
    cout << n - x << endl;
  }

}