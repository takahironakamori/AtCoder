#include <bits/stdc++.h>
using namespace std;

int main() {

  int A, B, C, D;
  cin >> A >> B >> C >> D;

  if (ceil((double) C / B) <= ceil((double) A / D)) {
    cout << "Yes" << endl;
  } else{
    cout << "No" << endl;
  }

  return 0;
}
