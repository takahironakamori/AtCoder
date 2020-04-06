#include <bits/stdc++.h>
using namespace std;

int main() {

  string S;
  cin >> S;

  char current = S[0];
  int answer = 0;

  for (int i = 1; i < S.size(); i++) {
    if (current != S[i]) {
      current = S[i];
      answer++;
    }
  }

  cout << answer << endl;

  return 0;

}
