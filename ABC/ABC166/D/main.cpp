#include <bits/stdc++.h>
using namespace std;

int main() {

  long long X;
  cin >> X;

  long long A = 0;
  long long B = 0;

  for (int i = -200; i <= 200; i++) {
    A = i;
    for (int k = 0; k < 4; k++) {
      A *= i;
    }
    for (int j = -200; j <= 200; j++) {
      B = j;
      for (int k = 0; k < 4; k++) {
        B *= j;
      }
      if (A - B == X) {
        cout << i << " " << j << endl;
        return 0;
      }
    }
  }

  return 0;
}
