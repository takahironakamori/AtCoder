#include <bits/stdc++.h>
using namespace std;

int main() {

  char C, c;
  cin >> C >> c;

  C = char(C + 32);

  if (C == c) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;

}
