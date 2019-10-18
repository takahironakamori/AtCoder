#include <bits/stdc++.h>
using namespace std;

int main() {

  long X, Y;
  cin >> X >> Y;

  long answer = 0;
  long v = X;

  while (v <= Y) {
    v *= 2;
    answer++;
  }

  cout << answer << endl;

}