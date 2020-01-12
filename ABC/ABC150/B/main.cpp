#include <bits/stdc++.h>
using namespace std;
 
int main() {

  int N;
  cin >> N;

  string S;
  cin >> S;

  int answer = 0;

  for (int i = 0; i < N - 2; i++) {
    string s_ = S.substr(i,3);
    if (s_ == "ABC") {
      answer++;
    }
  }

  cout << answer << endl;

}