#include <bits/stdc++.h>
using namespace std;

int main() {

  string A, B, C;
  cin >> A >> B >> C;

  int currentA = 0;
  int currentB = 0;
  int currentC = 0;

  string turn = "a";
  string winner = "";

  while (winner == "") {
    if (turn == "a") {
      if (currentA == A.size()) {
        winner = "A";
      } else {
        turn = A.at(currentA);
        currentA++;
      }
    } else if (turn == "b") {
      if (currentB == B.size()) {
        winner = "B";
      } else {
        turn = B.at(currentB);
        currentB++;
      }
    } else {
      if (currentC == C.size()) {
        winner = "C";
      } else {
        turn = C.at(currentC);
        currentC++;
      }
    }
  }

  cout << winner << endl;

}