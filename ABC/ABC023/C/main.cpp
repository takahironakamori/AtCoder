#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  string S;
  cin >> S;
  
  bool flg = true;
  int answer = 0;
  string current = "";

  while (flg) {
    if (answer == 0) {
      current += "b";
    } else if (answer % 3 == 1) {
      current = "a" + current + "c";
    } else if (answer % 3 == 2) {
      current = "c" + current + "a";
    } else if (answer % 3 == 0 && 0 < answer) {
      current = "b" + current + "b";
    }
    if (S == current) {
      flg = false;
    } else if (N <= current.size()) {
      flg = false;
      answer = -1;
    } else {
      answer++;
    }
  }

  cout << answer << endl;
 
}