#include <bits/stdc++.h>
using namespace std;

int main() {

  int A, B, C, D;
  cin >> A >> B >> C >> D;

  if (((double) B / A) == ((double) D / C)) {
    cout << "DRAW" << endl;
  } else if (((double) B / A) < ((double) D / C)) {
    cout << "AOKI" << endl;
  } else {
    cout << "TAKAHASHI" << endl;
  }

}