#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  string S, T;
  cin >> S >> T;
  
  int answer = 0;

  for (int i = 0; i < 3; i++) {
    if (S[i] == T[i]) {
      answer++;
    }
  }
  
  cout << answer << endl;

}