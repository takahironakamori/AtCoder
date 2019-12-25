#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  string S;
  cin >> S;
  
  int answer = 0;

  for (int i = 0; i < 4; i++) {
    if (S[i] == '+') {
      answer++;
    } else {
      answer--;
    }
  }

  cout << answer << endl;
 
}