#include <bits/stdc++.h>
using namespace std;

int main() {

  int A, B, C;
  cin >> A >> B >> C;

  string answer = "No";

  if (A == B && B != C) {
    answer = "Yes";
  } else if (B == C && A != C) {
    answer = "Yes";
  } else if (A == C && B != C) {
    answer = "Yes";
  }

  cout << answer << endl;

  return 0;

}
