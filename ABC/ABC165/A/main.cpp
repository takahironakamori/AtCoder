#include <bits/stdc++.h>
using namespace std;

int main() {

  int K, A, B;
  cin >> K >> A >> B;

  int check = (B / K) * K;

  if (A <= check) {
    cout << "OK" << endl;
  } else {
    cout << "NG" << endl;
  }

  return 0;
}
