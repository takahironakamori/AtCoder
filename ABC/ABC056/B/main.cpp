#include <bits/stdc++.h>
using namespace std;

int main() {

  int W, a, b;
  cin >> W >> a >> b;

  int answer = 0;

  if (b < a) {
    swap(a, b);
  }

  if (W + a < b) {
    answer = b - (W + a);
  }

  cout << answer << endl;

}