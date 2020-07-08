#include <bits/stdc++.h>
using namespace std;

int main() {

  int A, B;
  cin >> A >> B;

  if (A < 1 && B < 1) {
    cout << abs(A - B) << endl;
  } else if (A < 1 && 1 <= B) {
    cout << abs(A - B) - 1 << endl;
  } else if (B < 1 && 1 <= A) {
    cout << abs(A - B) - 1 << endl;
  } else {
    cout << abs(A - B) << endl;
  }
  return 0;

}
