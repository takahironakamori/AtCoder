#include <bits/stdc++.h>
using namespace std;


int main() {

  string S, T;
  cin >> S >> T;

  int A, B;
  cin >> A >> B;

  string U;
  cin >> U;

  if (U == S) {
    A--;
  }

  if (U == T) {
    B--;
  }

  cout << A << " " << B << endl;

  return 0;

}
