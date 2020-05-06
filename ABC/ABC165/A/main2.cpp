#include <bits/stdc++.h>
using namespace std;

int main() {

  int K, A, B;
  cin >> K >> A >> B;

  int current = 1;

  while (current * K <= B) {
    if (A <= current * K && current * K <= B) {
      cout << "OK" << endl;
      return 0;
    } else {
      current++;
    }
  }

  cout << "NG" << endl;

  return 0;

}
