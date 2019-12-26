#include <bits/stdc++.h>
using namespace std;

int main() {

  string S;
  cin >> S;

  int month = (S[5] - '0') * 10 + S[6] - '0';

  string answer = "";

  if (4 < month) {
    answer = "TBD";
  } else {
    answer = "Heisei";
  }

  cout << answer << endl;

}