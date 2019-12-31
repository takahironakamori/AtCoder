#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  bool flg = true;
  int current = 0;
  int v = 0;

  while (flg) {
    v = pow(2, current);
    if (N < v) {
      flg = false;
    } else {
      current++;
    }
  }

  cout << pow(2, current - 1) << endl;

}