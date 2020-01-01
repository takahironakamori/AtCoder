#include <bits/stdc++.h>
using namespace std;

int main() {

  int A, B;
  cin >> A >> B;

  string S;
  cin >> S;

  string answer = "Yes";

  for (int i = 0; i < A; i++) {
    if ((S[i] - '0') < 0 || 9 < (S[i] - '0')) {
      answer = "No";
      break;
    }
  }

  if (answer == "Yes") {
    if (S[A] != '-') {
      answer = "No";
    }
  }

  if (answer == "Yes") {
    for (int i = 0; i < B; i++) {
      if ((S[A + 1 + i] - '0') < 0 || 9 < (S[A + 1 + i] - '0')) {
        answer = "No";
        break;
      }
    }
  }

  cout << answer << endl;

}