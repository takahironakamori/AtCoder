#include <bits/stdc++.h>
using namespace std;

int main() {

  int A, B, C;
  cin >> A >> B >> C;

  string answer = "!";

  if ((A + B) == C && (A - B) == C) {
    answer = "?";
  } else if ((A + B) == C) {
    answer = "+";
  } else if ((A - B) == C){
    answer = "-";
  }

  cout << answer << endl;

}