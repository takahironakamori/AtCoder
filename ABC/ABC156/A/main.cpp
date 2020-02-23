#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, R;
  cin >> N >> R;

  if (N < 10) {
    int K = (10 - N) * 100;
    cout << R + K << endl;
  } else {
    cout << R << endl;
  }
  return 0;

}
