#include <bits/stdc++.h>
using namespace std;

int main() {

  int S;
  cin >> S;

  int f = S / 100;
  int b = S % 100;

  if (1 <= f && f <= 12 && 1 <= b && b <= 12) {
    cout << "AMBIGUOUS" << endl;
  } else if (1 <= f && f <= 12) {
    cout << "MMYY" << endl;
  } else if (1 <= b && b <= 12) {
    cout << "YYMM" << endl;
  } else {
    cout << "NA" << endl;
  }

}