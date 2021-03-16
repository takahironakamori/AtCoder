#include <bits/stdc++.h>
using namespace std;

int main() {

  int K;
  cin >> K;

  int ans = -1;

  bool flg = true;
  int count = 1;
  int amari = 0;
  vector<int> check(K);

  while (flg) {
    amari = (amari * 10 + 7) % K;
    if (amari == 0) {
      flg = false;
      ans = count;
      break;
    } else {
      count++;
      if (check[amari] != 0) {
        flg = false;
      } else {
        check[amari]++;
      }
    }
  }

  cout << ans << endl;

  return 0;

}