#include <bits/stdc++.h>
using namespace std;

int main() {

  string S;
  cin >> S;

  for (int i = 0; i < S.size(); i++){
    if (S[i] == 'O' || S[i] == 'D') {
      S[i] = '0';
    }
    if (S[i] == 'I') {
      S[i] = '1';
    }
    if (S[i] == 'Z') {
      S[i] = '2';
    }
    if (S[i] == 'S') {
      S[i] = '5';
    }
    if (S[i] == 'B') {
      S[i] = '8';
    }
  }

  cout << S << endl;

  return 0;

}
