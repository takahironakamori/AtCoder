#include <bits/stdc++.h>
using namespace std;

int main() {

  int S;
  cin >> S;

  int A = S / 1000;
  S -= (S / 1000) * 1000;
  int B = S / 100;
  S -= (S / 100) * 100;
  int C = S / 10;
  S -= (S / 10) * 10;
  int D = S;

  bool res = false;

  if (((A + B + C + D) == 7) && !(res)) { res = true; cout << A << "+" << B << "+" << C << "+" << D << "=7" << endl; }
  if (((A - B + C + D) == 7) && !(res)) { res = true; cout << A << "-" << B << "+" << C << "+" << D << "=7" << endl; }
  if (((A + B - C + D) == 7) && !(res)) { res = true; cout << A << "+" << B << "-" << C << "+" << D << "=7" << endl; }
  if (((A + B + C - D) == 7) && !(res)) { res = true; cout << A << "+" << B << "+" << C << "-" << D << "=7" << endl; }
  if (((A - B - C + D) == 7) && !(res)) { res = true; cout << A << "-" << B << "-" << C << "+" << D << "=7" << endl; }
  if (((A - B + C - D) == 7) && !(res)) { res = true; cout << A << "-" << B << "+" << C << "-" << D << "=7" << endl; }
  if (((A + B - C - D) == 7) && !(res)) { res = true; cout << A << "+" << B << "-" << C << "-" << D << "=7" << endl; }
  if (((A - B - C - D) == 7) && !(res)) { res = true; cout << A << "-" << B << "-" << C << "-" << D << "=7" << endl; }

}