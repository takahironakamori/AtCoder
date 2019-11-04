#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  string S;
  cin >> S;
  
  int answer = 1;
  char current = S[0];

  for (int i = 0; i < N; i++) {
    if (current != S[i]) {
      current = S[i];
      answer++;
    }
  }

  cout << answer << endl;
  
}