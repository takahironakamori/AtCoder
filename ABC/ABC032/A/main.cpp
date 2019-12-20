#include <bits/stdc++.h>
using namespace std;

int main() {

  int a, b, n;
  cin >> a >> b >> n;

  bool flg = true;
  int answer = 0;

  while (flg) {
    if ((n % a) == 0 && (n % b) == 0) {
      answer = n;
      flg = false;
    } else {
      n++;
    }
  }

  cout << answer << endl;

}