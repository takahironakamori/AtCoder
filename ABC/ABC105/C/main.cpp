#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  string answer = "";

  if (N == 0) {
    answer = "0";
  } else {
    while (N != 0) {
      if (N % 2 != 0) {
        N--;
        answer = "1" + answer;
      } else {
        answer = "0" + answer;
      }
      N /= -2;
    }
  }

  cout << answer << endl;

  return 0;

}
