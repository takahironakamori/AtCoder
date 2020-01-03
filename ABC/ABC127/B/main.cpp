#include <bits/stdc++.h>
using namespace std;

int main() {

  int r, D ,x;
  cin >> r >> D >> x;

  long long answer = x;
  for (int i = 0; i < 10; i++) {
    answer = r * answer - D;
    cout << answer << endl;
  }

}