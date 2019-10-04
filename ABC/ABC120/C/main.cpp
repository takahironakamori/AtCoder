#include <bits/stdc++.h>
using namespace std;

int main() {

  string S;
  cin >> S;

  int countZero = 0;
  int countOne = 0;
  
  for (int i = 0; i < S.length(); i++) {
    if (S[i] == '0') {
      countZero++;
    } else {
      countOne++;
    }
  }
  
  cout << min(countZero, countOne) * 2 << endl;

}